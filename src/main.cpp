#include "stdafx.h"
#include <typeinfo>
#include "AlgorithmRunner.h"
#include "MergeSortArray.h"
#include "HeapSortArray.h"
#include "BucketSortArray.h"
#include "MergeSortLinkedList.h"

int i;

//void generateData()
//{
//    FileArrayInterface *fai = new FileArrayInterface(1, "data\\data.bin");
//
//    fai->random(32);
//}

int main()
{
	//MergeSortArray * runner = new MergeSortArray();
	HeapSortArray * runner = new HeapSortArray();
	//BucketSortArray * runner = new BucketSortArray();
	//MergeSortLinkedList * runner = new MergeSortLinkedList();

	printf("Runner: %s\n", typeid(runner).name());
	printf("Element count: %d\n", runner->num);
	//for (i = 0; i <= runner->num - 1; i++) {
	//	printf("%d\t", runner->a->get(i));
	//}
	//printf("\n");

	runner->run();

	printf("IO: %d\n", runner->a->io);
	//for (i = 0; i <= runner->num - 1; i++) {
	//	printf("%d\t", runner->a->get(i));
	//}
	//printf("\n");

	//generateData();
    return 0;
}
