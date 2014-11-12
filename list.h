#ifndef _LIST_H_
#define _LIST_H_

#include "node.h"

class list{
	node *head;
	int size;
public:
	list() : size(0), head(new node) {};
	~list();
	void push(int x);
	void pop(int x);
	int search(int x);
};

#endif