#pragma once
#include "Node.h"
#include "FileArrayInterface.h"

class AlgorithmRunner
{
public:
	AlgorithmRunner();
	virtual void run();
	Node * head();

	FileArrayInterface * a;
	static const int num = 32;
};

