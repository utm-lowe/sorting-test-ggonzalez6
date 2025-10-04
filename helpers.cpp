#include "helpers.h"
#include <cstdlib>  // rand, srand
#include <ctime>    // time
#include <iostream>

void generateVector(std::vector<int> &v, int minVal, int maxVal) {
  // Seed the random number generator once per program run
  static bool seeded = false;
  if (!seeded) {
    srand(static_cast<unsigned>(time(0)));
    seeded = true;
  }

  for (auto &x : v) {
    x = minVal + rand() % (maxVal - minVal + 1);
  }
}

void printVector(const std::vector<int> &v) {
  int count = 0;
  for (auto x : v) {
    std::cout << x << ' ';
    if (++count % 25 == 0) std::cout << '\n';  // wrap every 25 numbers
  }
  std::cout << '\n';
}
