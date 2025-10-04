#include "mergesort.h"

static void merge(std::vector<int>& A, int p, int q, int r) {
  int nL = q - p + 1;
  int nR = r - q;

  std::vector<int> L(nL), R(nR);
  for (int i = 0; i < nL; ++i) L[i] = A[p + i];
  for (int j = 0; j < nR; ++j) R[j] = A[q + 1 + j];

  int i = 0, j = 0, k = p;
  while (i < nL && j < nR) {
    if (L[i] <= R[j]) A[k++] = L[i++];
    else              A[k++] = R[j++];
  }
  while (i < nL) A[k++] = L[i++];
  while (j < nR) A[k++] = R[j++];
}

static void mergeSortRec(std::vector<int>& A, int p, int r) {
  if (p >= r) return;
  int q = p + (r - p) / 2;
  mergeSortRec(A, p, q);
  mergeSortRec(A, q + 1, r);
  merge(A, p, q, r);
}

void mergesort(std::vector<int>& ar) {
  if (!ar.empty()) mergeSortRec(ar, 0, static_cast<int>(ar.size() - 1));
}
