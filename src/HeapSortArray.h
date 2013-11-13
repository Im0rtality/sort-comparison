#pragma once
#include "AlgorithmRunner.h"

class HeapSortArray:public AlgorithmRunner {
  private:
    void buildheap(int n);
	void heapify(int heapsize, int root);
    void heapsort();
	void swap(int x, int y);
  public:
    void run();
};
