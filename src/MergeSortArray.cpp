#include "StdAfx.h"
#include "MergeSortArray.h"
#include "FileArrayInterface.h"
#include "MemoryArrayInterface.h"

void MergeSortArray::merge_sort(int low, int high)
{
    int mid;
    if (low < high) {
		mid = (low + high) / 2;
		merge_sort(low, mid);
		merge_sort(mid + 1, high);
		merge(low, mid, high);
    }
}

void MergeSortArray::merge(int low, int mid, int high)
{
	MemoryArrayInterface * b = new MemoryArrayInterface();
    int h, i, j, k;
    h = low;
    i = low;
    j = mid + 1;

    while ((h <= mid) && (j <= high)) {
		if (this->a->get(h) <= this->a->get(j)) {
			b->set(i, this->a->get(h));
			h++;
		} else {
			b->set(i, this->a->get(j));
			j++;
		}
		i++;
	}
	if (h > mid) {
		for (k = j; k <= high; k++) {
			b->set(i, this->a->get(k));
			i++;
		}
	} else {
		for (k = h; k <= mid; k++) {
			b->set(i, this->a->get(k));
			i++;
		}
    }
    for (k = low; k <= high; k++) {
		this->a->set(k, b->get(k));
    }
	delete b;
}

void MergeSortArray::run(void)
{
	this->merge_sort(0, this->num - 1);
}