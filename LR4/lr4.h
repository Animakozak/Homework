#include <iostream>
using namespace std;
struct Item{
  int data;
  Item *next;
} *root, *cur, *peek;
void itemCreate(){
	int count;
	cout<<"Enter quantity: ";
	cin>>count;
	if(!count) return;
	root = new Item;
	root->next=NULL;
	cin>>root->data;
	cur=root;
	for(int i=1; i<count; i++){
		cur->next=new Item;
		cur=cur->next;
		cur->next=NULL;
		cin>>cur->data;
	}
	peek=cur;
}
void itemDestroy(){
	while(root){
		cur=root;
		root=cur->next;
		delete cur;
	}
//	if (peek) delete peek;
}
void itemView(){
	cur=root;
//	cur=cur->next;
	while(cur){
		cout<<cur->data<<endl;
		cur=cur->next;
	}
}
void itemAdd(int value){
	cur=root;
	while(cur->next) cur=cur->next;
	cur->next=new Item;
	cur->next=NULL;
	cur->data=value;
	peek=cur;
}
void itemDelete(int key){
	cur=root;
	while (cur->data!=key && cur) cur=cur->next;
	if(!cur){
		cout<<"Key not found!"<<endl;
		return;
	}
	if (cur == root) {
		Item *temp = root;
		temp -> next = cur -> next;
		root = temp -> next;
		delete cur;
		return;
	}
	Item *temp = root;
	while (temp -> next != cur) {
		temp = temp -> next;
	}
	temp -> next = cur -> next;
	delete cur;
}
void itemInsert(int value, int key){
	cur=root;
	while (cur->data!=key && cur) cur=cur->next;
    if(!cur){
		cout<<"Key not found!"<<endl;
		return;
	}
	Item *temp=new Item;
	temp->next=cur->next;
	temp->data=value;
	cur->next=temp;
}