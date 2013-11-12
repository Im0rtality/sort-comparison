#include "stdafx.h"
#include "Node.h"
#include "AlgorithmRunner.h"

Node::Node(FileArrayInterface * file, int position)
{
	this->file = file;
	this->position = position;
}

Node * Node::next() {
	if (this->position < AlgorithmRunner::num) {
		Node * node = new Node(this->file, position + 1);
		return node;
	} else {
		return NULL;
	}
}

unsigned char Node::get() {
	return this->file->get(this->position);
}

void Node::set(unsigned char value) {
	this->file->set(this->position, value);
}