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
		Node * node = new Node(this->a, 0);
		return node;
}