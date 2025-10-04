#include "selectionSortA.h"
#include <algorithm> // std::swap
#include <iostream>

void selectionSortA(std::vector<int> &ar) {
  int n = static_cast<int>(ar.size());
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (ar[j] < ar[i]) {
	std::swap(ar[j], ar[i]);
      }
    }
  }
}
