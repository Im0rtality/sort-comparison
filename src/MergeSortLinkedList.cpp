#include "StdAfx.h"
#include "MergeSortLinkedList.h"
#include "FileArrayInterface.h"
#include "MemoryArrayInterface.h"

Node * MergeSortLinkedList::merge(Node * head_one, Node * head_two)
{

    Node * head_three;
    if (head_one == NULL)
		return head_two;
    if (head_two == NULL)
		return head_one;
    if (head_one->get()< head_two->get()) {

		head_three = head_one;
		head_three->next = this->merge(head_one->next, head_two);
    } else {
		head_three = head_two;
		head_three->next = this->merge(head_one, head_two->next);
	}

    return head_three;
}

Node * MergeSortLinkedList::merge_sort(Node * head)
{
	Node *head_one;
    Node *head_two;
    if ((head == NULL) || (head->next == NULL))
		return head;
    head_one = head;
    head_two = head->next;
    while ((head_two != NULL) && (head_two->next != NULL)) {
		head = head->next;
		head_two = head->next->next;
    }
    head_two = head->next;
    head->next = NULL;
    return this->merge(this->merge_sort(head_one), this->merge_sort(head_two));
}


void MergeSortLinkedList::run(void)
{
	this->merge_sort(this->head());
}