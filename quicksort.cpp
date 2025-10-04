#include "quicksort.h"
#include <algorithm> // std::swap

// Lomuto partition scheme
static int partition(std::vector<int>& A, int low, int high) {
  int pivot = A[high];
  int i = low - 1;
  for (int j = low; j < high; ++j) {
    if (A[j] <= pivot) {
      std::swap(A[++i], A[j]);
    }
  }
  std::swap(A[i + 1], A[high]);
  return i + 1;
}

static void quicksortRec(std::vector<int>& A, int low, int high) {
  if (low >= high) return;
  int p = partition(A, low, high);
  quicksortRec(A, low, p - 1);
  quicksortRec(A, p + 1, high);
}

void quicksort(std::vector<int>& ar) {
  if (!ar.empty()) quicksortRec(ar, 0, static_cast<int>(ar.size() - 1));
}
