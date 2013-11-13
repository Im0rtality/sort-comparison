#pragma once
#include "AlgorithmRunner.h"

class MergeSortLinkedList : public AlgorithmRunner
{
private:
	Node * merge_sort(Node * head);
	Node * merge(Node * head_one, Node * head_two);
public:
	void run();
};

