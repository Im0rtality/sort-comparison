#include "stdafx.h"
#include "FileArrayInterface.h"
#include "AlgorithmRunner.h"
#include "MergeSortArray.h"

int i, num = 32;

AlgorithmRunner * runner;

void generateData()
{
    FileArrayInterface *fai = new FileArrayInterface(1, "data\\data.bin");

    fai->random(32);
}

int main()
{
	runner = new MergeSortArray();

    for (i = 0; i <= runner->num - 1; i++) {
		printf("%d\t", runner->a->get(i));
	}
    printf("\n");

	runner->run();

    for (i = 0; i <= runner->num - 1; i++) {
		printf("%d\t", runner->a->get(i));
	}
    printf("\n");

    //generateData();

    return 0;
}
