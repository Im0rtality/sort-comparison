#pragma once
#include "AlgorithmRunner.h"

class BucketSortArray:public AlgorithmRunner {
  private:
    int hash(int n);
    void sortBucket(FileArrayInterface * input, int len);
    void bucketsort();
  public:
    void run();
};
