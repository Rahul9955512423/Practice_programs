//
// 		DATA STRUCTURE.CPP
//
// 		Created by Rahul Kumar Dubey on 01/09/2020.
//		Copyright @2020 Rahul Kumar Dubey. All rights reserverd
//
//
//		----**Linked_List in C++**-------
//
#include <iostream>
using namespace std;

//Linked List Node
struct node{

	int data;
	node *next;
};

void print_list(node *n){

	while(n!=NULL){
	
		printf("%d ",n->data);
		n = n->next;
	}


}

int main(){

	node *head = new node();
	node *second = new node();
	node *third = new node();

	head->data = 10;
	head->next = second;

	second->data = 12;
	second->next = third;

	third->data = 14;
	third->next = NULL;

	print_list(head);

}
