#include "countingSort.h"

void countingSort(std::vector<int>& a) {
  int n = (int)a.size();
  if (n < 2) return;

  int maxVal = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i] > maxVal) maxVal = a[i];
  }
  if (maxVal < 0) return;

  std::vector<int> count((std::size_t)maxVal + 1, 0);
  for (int i = 0; i < n; ++i) {
    ++count[a[i]];
  }

  for (std::size_t i = 1; i < count.size(); ++i) {
    count[i] += count[i - 1];
  }

  std::vector<int> out(n);
  for (int i = n - 1; i >= 0; --i) {
    int x = a[i];
    int pos = --count[x];
    out[pos] = x;
  }

  a.swap(out);
}
