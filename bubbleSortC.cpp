#include "bubbleSortC.h"

void bubbleSortC(std::vector<int>& a) {
  int n = (int)a.size();
  if (n < 2) return;

  bool swapped;
  int start = 1;
  do {
    swapped = false;
    for (int j = n - 1; j >= start; --j) {
      if (a[j] < a[j - 1]) {
	int t = a[j];
	a[j] = a[j - 1];
	a[j - 1] = t;
	swapped = true;
      }
    }
    ++start;
  } while (swapped);
}
