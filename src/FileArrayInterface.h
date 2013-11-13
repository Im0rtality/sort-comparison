#pragma once
#include <stdlib.h>

class FileArrayInterface
{
private:
	int elementSize;
	char * fileName;
public:
	FileArrayInterface(int elementSize, char * fileName);
	~FileArrayInterface(void);
	void random(int count);
	unsigned char get(int index);
	void set(int index, unsigned char value);
	int io;
};

