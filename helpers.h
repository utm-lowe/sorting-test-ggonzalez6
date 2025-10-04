#ifndef HELPERS_H
#define HELPERS_H

#include <vector>

// Fill vector with random integers in [minVal, maxVal].
void generateVector(std::vector<int> &v, int minVal = 0, int maxVal = 999);

// Print with spaces, wrapped across lines so it’s readable.
void printVector(const std::vector<int> &v);

#endif // HELPERS_H
