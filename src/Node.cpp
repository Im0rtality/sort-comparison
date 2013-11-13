#include "stdafx.h"
#include "Node.h"
#include "AlgorithmRunner.h"

Node::Node(FileArrayInterface * file, int position)
{
	this->file = file;
	this->position = position;
}

unsigned char Node::get() {
	return this->file->get(this->position);
}

void Node::set(unsigned char value) {
	this->file->set(this->position, value);
}