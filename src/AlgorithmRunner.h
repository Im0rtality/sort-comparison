#pragma once
#include "AlgorithmRunner.h"
#include "FileArrayInterface.h"

class AlgorithmRunner
{
public:
	AlgorithmRunner();
	virtual void run();

	FileArrayInterface * a;
	static const int num = 32;
};

