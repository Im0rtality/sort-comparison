#include "StdAfx.h"
#include "BucketSortArray.h"
#include "FileArrayInterface.h"
#include "MemoryArrayInterface.h"
#include <queue>

using namespace std;

void BucketSortArray::run(void)
{
    this->bucketsort();
}

int BucketSortArray::hash(int n)
{
    return n / 5;
}

void BucketSortArray::sortBucket(FileArrayInterface * input, int len)
{
    while (len-- > 0) {
	if (input->get(len) > input->get(len + 1)) {
	    unsigned char tmp = input->get(len);
	    input->set(len, input->get(len + 1));
	    input->set(len + 1, tmp);
	} else
	    return;
    }
}

void BucketSortArray::bucketsort()
{
    queue < unsigned char >*buckets[this->num];
    for (int i = 0; i < this->num; i++)
	buckets[i] = new queue < unsigned char >;

    // Hash the input and insert the content into appropriate bucket based on hash.
    for (int i = 0; i < this->num; i++) {
	int hashValue = this->hash(this->a->get(i));
	if (hashValue >= this->num)
	    hashValue = this->num - 1;

	buckets[hashValue]->push(this->a->get(i));
    }

    // extract the content from each of the buckets in order.
    // using insertion sort
    int outputidx = 0;
    for (int i = 0; i < this->num; i++) {
	if (buckets[i]->size() == 1) {
	    this->a->set(outputidx++, buckets[i]->front());
	    buckets[i]->pop();
	}
	if (buckets[i]->size() > 1) {
	    while (!buckets[i]->empty()) {
		this->a->set(outputidx, buckets[i]->front());

		this->sortBucket(this->a, outputidx);
		buckets[i]->pop();
		outputidx++;
	    }
	}
    }
    // clear buckets.
    for (int i = 0; i < this->num; i++)
	delete buckets[i];

}
