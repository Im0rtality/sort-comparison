#pragma once
#include "FileArrayInterface.h"

class Node {
  private:
	int position;
	FileArrayInterface * file;
  public:
	Node(FileArrayInterface * file, int position);
    Node * next;
	unsigned char get();
	void set(unsigned char value);
    Node * getNext();
	void setNext(unsigned char value);
};
