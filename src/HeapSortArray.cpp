#include "StdAfx.h"
#include "HeapSortArray.h"
#include "FileArrayInterface.h"
#include "MemoryArrayInterface.h"

void HeapSortArray::run(void)
{
	this->makeheap(this->num);
	this->sortheap();
}

void HeapSortArray::makeheap(int n)
{
    unsigned char temp;
    int i, k, j;
    for (i = 1; i < n; i++)
    {
	temp = this->a->get(i);
	k = (i - 1) / 2;
	j = i;
	while (j > 0 && this->a->get(k) < temp) {
	    this->a->set(j, this->a->get(k));
	    j = k;
	    k = (j - 1) / 2;
	}
	this->a->set(j, temp);
    }
}

void HeapSortArray::sortheap()
{
    int temp, i, j;
    for (i = this->num - 1; i >= 1; i--) {
	temp = this->a->get(i);
	this->a->set(i, this->a->get(0));
	this->a->set(0, temp);
	this->makeheap(i);
    }
}
