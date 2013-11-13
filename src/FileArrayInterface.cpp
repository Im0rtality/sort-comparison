#include "stdafx.h"
#include "FileArrayInterface.h"

FileArrayInterface::FileArrayInterface(int elementSize, char * fileName)
{
	this->elementSize = elementSize;
	this->fileName = fileName;
	this->io = 0;
}

FileArrayInterface::~FileArrayInterface(void)
{
	
}

unsigned char FileArrayInterface::get(int index) 
{
	FILE * hFile = fopen(this->fileName, "r");
	fseek(hFile, this->elementSize * index, SEEK_SET);
	unsigned char result;
	fread(&result, this->elementSize, 1, hFile);
	fclose(hFile);
	this->io++;
	return result;
}


void FileArrayInterface::set(int index, unsigned char value) 
{
	FILE * hFile = fopen(this->fileName, "r+");
	fseek(hFile, this->elementSize * index, SEEK_SET);
	fwrite(&value, this->elementSize, 1, hFile);
	fclose(hFile);
	this->io++;
}

void FileArrayInterface::random(int count)
{
	FILE * hFile = fopen(this->fileName, "w");
	for(int i = 0; i < count; i++) {
		char value = rand();
		fwrite(&value, this->elementSize, 1, hFile);
	}
	
	fclose(hFile);
}