#include "ne_lib/nn.hpp"
#include <algorithm>
#include <cmath>

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

double relu(double x) {
    return std::max(0.0, x);
}

NeuralNetwork::NeuralNetwork(std::vector<int> sizes, double (*activation)(double)) {
    numLayers = sizes.size();
    layerSizes = sizes;
    activationFunc = activation;

    for (int i = 0; i < numLayers - 1; i++) {
        weights.push_back(std::vector<double>(layerSizes[i + 1] * layerSizes[i], 0.0));
        biases.push_back(std::vector<double>(layerSizes[i + 1], 0.0));
    }
}

std::vector<double> NeuralNetwork::feedForward(const std::vector<double>& input) {
    std::vector<double> activations = input;
    for (int i = 0; i < numLayers - 1; i++) {
        std::vector<double> newActivations;
        for (int j = 0; j < layerSizes[i + 1]; j++) {
            double sum = biases[i][j];
            for (int k = 0; k < layerSizes[i]; k++) {
                sum += weights[i][j * layerSizes[i] + k] * activations[k];
            }
            newActivations.push_back(activationFunc(sum));
        }
        activations = newActivations;
    }
    return activations;
}
