#pragma once
#include <stdint.h>

class MemoryArrayInterface
{
private:
	uint8_t * data;
public:
	MemoryArrayInterface();
	unsigned char get(int index);
	void set(int index, unsigned char value);
};

