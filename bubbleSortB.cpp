#include "bubbleSortB.h"

void bubbleSortB(std::vector<int>& a) {
  int n = (int)a.size();
  if (n < 2) return;

  bool swapped;
  int end = n - 1;
  do {
    swapped = false;
    for (int j = 0; j < end; ++j) {
      if (a[j] > a[j + 1]) {
	int t = a[j];
	a[j] = a[j + 1];
	a[j + 1] = t;
	swapped = true;
      }
    }
    --end;
  } while (swapped);
}
