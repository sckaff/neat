#pragma once
#include <vector>

double sigmoid(double x);
double relu(double x);

class NeuralNetwork {
private:
    std::vector<std::vector<double>> weights;
    std::vector<std::vector<double>> biases;
    int numLayers;
    std::vector<int> layerSizes;
    double (*activationFunc)(double);

public:
    NeuralNetwork(std::vector<int> sizes, double (*activation)(double));
    std::vector<double> feedForward(const std::vector<double>& input);
};
