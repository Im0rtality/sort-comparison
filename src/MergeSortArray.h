#pragma once
#include "AlgorithmRunner.h"

class MergeSortArray : public AlgorithmRunner
{
private:
	void merge_sort(int low, int high);
	void merge(int low, int mid, int high);
public:
	void run();
};

