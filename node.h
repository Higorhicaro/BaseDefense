#ifndef _NODE_H_
#define _NODE_H_

class node{
	int data;
	node *next;
public:
	node();
	node(int x) : data(x) {};
	node(node *x) : next(x) {};
	node(int x, node *y) : data(x), next(y) {};
	~node();
	void setData(int x) { data = x; };
	int getData() { return data; };
	void setNext(node *x) { next = x; };
	node *getNext() { return next; };
};

#endif