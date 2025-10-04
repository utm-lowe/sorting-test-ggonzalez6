CC = g++
CFLAGS = -g -Wall -Wextra

default: program

program: main.o selectionSortA.o selectionSortB.o mergesort.o quicksort.o helpers.o insertionSort.o bubbleSortA.o bubbleSortB.o bubbleSortC.o countingSort.o radixSort.o
	$(CC) $(CFLAGS) -o program main.o selectionSortA.o selectionSortB.o mergesort.o quicksort.o helpers.o insertionSort.o bubbleSortA.o bubbleSortB.o bubbleSortC.o countingSort.o radixSort.o

main.o: main.cpp selectionSortA.h selectionSortB.h mergesort.h quicksort.h helpers.h insertionSort.h bubbleSortA.h bubbleSortB.h bubbleSortC.h countingSort.h radixSort.h
	$(CC) $(CFLAGS) -c main.cpp

selectionSortA.o: selectionSortA.cpp selectionSortA.h
	$(CC) $(CFLAGS) -c selectionSortA.cpp

selectionSortB.o: selectionSortB.cpp selectionSortB.h
	$(CC) $(CFLAGS) -c selectionSortB.cpp

mergesort.o: mergesort.cpp mergesort.h
	$(CC) $(CFLAGS) -c mergesort.cpp

quicksort.o: quicksort.cpp quicksort.h
	$(CC) $(CFLAGS) -c quicksort.cpp

helpers.o: helpers.cpp helpers.h
	$(CC) $(CFLAGS) -c helpers.cpp

insertionSort.o: insertionSort.cpp insertionSort.h
	$(CC) $(CFLAGS) -c insertionSort.cpp

bubbleSortA.o: bubbleSortA.cpp bubbleSortA.h
	$(CC) $(CFLAGS) -c bubbleSortA.cpp

bubbleSortB.o: bubbleSortB.cpp bubbleSortB.h
	$(CC) $(CFLAGS) -c bubbleSortB.cpp

bubbleSortC.o: bubbleSortC.cpp bubbleSortC.h
	$(CC) $(CFLAGS) -c bubbleSortC.cpp

countingSort.o: countingSort.cpp countingSort.h
	$(CC) $(CFLAGS) -c countingSort.cpp

radixSort.o: radixSort.cpp radixSort.h
	$(CC) $(CFLAGS) -c radixSort.cpp

clean:
	$(RM) *.o *~
