#include "selectionSortB.h"
#include <algorithm> // std::swap

void selectionSortB(std::vector<int> &ar) {
  int n = static_cast<int>(ar.size());
  for (int i = 0; i < n; ++i) {
    int minIndex = i;
    for (int j = i + 1; j < n; ++j) {
      if (ar[j] < ar[minIndex]) {
	minIndex = j;
      }
    }
    std::swap(ar[i], ar[minIndex]);
  }
}
