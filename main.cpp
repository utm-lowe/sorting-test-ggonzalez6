#include <iostream>
#include <vector>
#include "selectionSortA.h"
#include "selectionSortB.h"
#include "mergesort.h"
#include "quicksort.h"
#include "helpers.h"
#include "insertionSort.h"
#include "bubbleSortA.h"
#include "bubbleSortB.h"
#include "bubbleSortC.h"
#include "countingSort.h"
#include "radixSort.h"

int main() {
  const int N = 100;
  std::vector<int> v(N);

  // Selection Sort A
  generateVector(v);
  selectionSortA(v);
  std::cout << "Selection Sort A (swap-each):\n";
  printVector(v);

  // Selection Sort B
  generateVector(v);
  selectionSortB(v);
  std::cout << "Selection Sort B (swap-at-end):\n";
  printVector(v);

  // Merge Sort
  generateVector(v);
  mergesort(v);
  std::cout << "Merge Sort:\n";
  printVector(v);

  // Quick Sort
  generateVector(v);
  quicksort(v);
  std::cout << "Quick Sort:\n";
  printVector(v);

  // Insertion Sort
  generateVector(v);
  insertionSort(v);
  std::cout << "Insertion Sort:\n";
  printVector(v);

  // Bubble Sort A (no swap detection)
  generateVector(v);
  bubbleSortA(v);
  std::cout << "Bubble Sort A (no swap detection):\n";
  printVector(v);

  // Bubble Sort B (swap detection, forward)
  generateVector(v);
  bubbleSortB(v);
  std::cout << "Bubble Sort B (swap detection, forward):\n";
  printVector(v);

  // Bubble Sort C (swap detection, backward)
  generateVector(v);
  bubbleSortC(v);
  std::cout << "Bubble Sort C (swap detection, backward):\n";
  printVector(v);

  // Counting Sort
  generateVector(v);
  countingSort(v);
  std::cout << "Counting Sort:\n";
  printVector(v);

  // Radix Sort
  generateVector(v);
  radixSort(v);
  std::cout << "Radix Sort:\n";
  printVector(v);

  return 0;
}
