#pragma once
class MemoryArrayInterface
{
private:
	unsigned char data[32];
public:
	MemoryArrayInterface();
	unsigned char get(int index);
	void set(int index, unsigned char value);
};

