#include "radixSort.h"
#include <vector>

static void stableBitPass(const std::vector<int>& in, std::vector<int>& out, int bit) {
  int n = (int)in.size();
  int count0 = 0, count1 = 0;

  for (int i = 0; i < n; ++i) {
    if ((in[i] >> bit) & 1) ++count1;
    else ++count0;
  }

  int pos0 = 0;
  int pos1 = count0;

  for (int i = 0; i < n; ++i) {
    int x = in[i];
    if (((x >> bit) & 1) == 0) {
      out[pos0++] = x;
    } else {
      out[pos1++] = x;
    }
  }
}

void radixSort(std::vector<int>& a) {
  int n = (int)a.size();
  if (n < 2) return;

  std::vector<int> tmp(n);
  std::vector<int>* src = &a;
  std::vector<int>* dst = &tmp;

  for (int bit = 0; bit <= 30; ++bit) {
    stableBitPass(*src, *dst, bit);
    std::vector<int>* t = src;
    src = dst;
    dst = t;
  }

  if (src != &a) a = *src;
}
