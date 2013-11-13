#include "stdafx.h"
#include <typeinfo>
#include "AlgorithmRunner.h"
#include "MergeSortArray.h"
#include "HeapSortArray.h"
#include "BucketSortArray.h"
//#include "MergeSortLinkedList.h"

int main()
{
	//MergeSortArray * runner = new MergeSortArray();
	HeapSortArray * runner = new HeapSortArray();
	//BucketSortArray * runner = new BucketSortArray();
	//MergeSortLinkedList * runner = new MergeSortLinkedList();

	printf("Runner: %s\n", typeid(runner).name());
	printf("Element count: %d\n", runner->num);

	runner->run();

	printf("IO: %d\n", runner->a->io);
    return 0;
}
