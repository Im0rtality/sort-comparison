#include "StdAfx.h"
#include "HeapSortArray.h"
#include "FileArrayInterface.h"
#include <math.h>

void HeapSortArray::run(void)
{
	heapsort();
}
void HeapSortArray::heapify(int heapsize, int root) //(takes O(h) time, h is the height of root
{
	int left = 2*root+1, 
		right = 2*root +2,
		largest;
	
	if ( (left < heapsize) && (this->a->get(left) > this->a->get(root)))
		largest = left;
	else 
		largest = root;
	
	if ( (right < heapsize) && (this->a->get(right) > this->a->get(largest)))
		largest = right;
		
	if (largest != root)
	{
		swap(root, largest);
		heapify(heapsize, largest);
	}
}

void HeapSortArray::swap(int x, int y)
{
	int temp;
	
	temp = this->a->get(x);
	this->a->set(x, this->a->get(y));
	this->a->set(y, temp);
}

void HeapSortArray::heapsort()
{
	int heapsize = this->num;
	
	buildheap(this->num);	//Take the unsorted list and make it a heap
	for (int i = this->num-1; i >=1; i--)
	{
		swap(0, i);
		heapsize--;
		heapify(heapsize, 0);		
	}
}
void HeapSortArray::buildheap(int length)	//     (takes O(n) time)
{	
	for (int i = (int)floor((float)(length)/2); i >= 0 ; i--)
		heapify(length, i);
}
