#include "stdafx.h"
#include "AlgorithmRunner.h"

AlgorithmRunner::AlgorithmRunner()
{
	this->a = new FileArrayInterface(1, "data\\data.bin");
}

void AlgorithmRunner::run(void)
{
}

Node * AlgorithmRunner::head() 
{
	Node * head = new Node(this->a, 0);
	Node * current = head;
	for (int i = 1; i < AlgorithmRunner::num; i++) {
		current->next = new Node(this->a, i);
		current = current->next;
	}
	current->next = NULL;
	return head;
}