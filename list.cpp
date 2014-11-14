#include <iostream>
#include "list.h"
#include "node.h"

list::push(int x){
	node novo = new node;
	novo->data = x;
	novo->next = head->next
	head->next == novo;
}

list::search(int x){
	int aux = 0;
	node *no = new node;
	no = head->next;
	while(no->data != x){
		aux++;
		no = no->next;
	}
	if(aux == size) return -1;
	else return aux;
}

list::pop(int x){
	int aux = search(x);
	node *no = new node;
	no = head->next;
	for(int i=0; i<aux; i++){
		no = no->next;
	}
	node *no2 = new node;
	no2 = no->next;
	no->next = no2->next
	free(no2);
}