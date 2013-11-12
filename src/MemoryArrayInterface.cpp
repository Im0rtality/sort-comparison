#include "StdAfx.h"
#include "MemoryArrayInterface.h"
#include "AlgorithmRunner.h"


MemoryArrayInterface::MemoryArrayInterface()
{
	for(int i = 0; i < AlgorithmRunner::num; i++) {
		this->data[i] = 0;
	}
}

unsigned char MemoryArrayInterface::get(int index) 
{
	return this->data[index];
}


void MemoryArrayInterface::set(int index, unsigned char value) 
{
	this->data[index] = value;
}