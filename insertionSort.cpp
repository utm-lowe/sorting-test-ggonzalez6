#include "insertionSort.h"

void insertionSort(std::vector<int>& a) {
  int n = (int)a.size();
  for (int i = 1; i < n; ++i) {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = key;
  }
}
