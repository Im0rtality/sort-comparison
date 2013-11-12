#pragma once
#include "AlgorithmRunner.h"

class HeapSortArray:public AlgorithmRunner {
  private:
    void makeheap(int n);
    void sortheap();
  public:
    void run();
};
