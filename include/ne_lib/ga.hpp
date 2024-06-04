#pragma once
#include <vector>

typedef std::vector<double> Individual;

double fitness(const Individual& individual);
void mutate(Individual& individual, double mutationRate);
Individual crossover(const Individual& parent1, const Individual& parent2);
std::vector<Individual> geneticAlgorithm(int populationSize, int numGenerations, double mutationRate, double crossoverRate);
