#include <iostream>
using namespace std;
struct Item{
  int data;
  Item *next;
} *root, *cur;
void Create(){
	int count;
	cout<<"Enter element number";
	cin>>count;
	if(!count) return;
	root= new Item;
	root->next=NULL;
	cin>>root->data;
	for(int i=1; i<count; i++){
		cur->next=new Item;
		cur=cur-next;
		cur->next=NULL;
		cin>>cur->data;
	}
}
void Destroy(){
	while(root){
		cur=root;
		root=cur->next;
		delete cur;
	}
}
void view(){
	cur=root;
	while(cur){
		cout<<cur->data<<endl;
		cur=cur->next;
	}
}
void Add(){
	cur=root;
	while(cur->next) cur=cur->next;
	cur->next=new Item;
	cur->next=NULL;
	cin>>cur->data;
}
void Delete(){
	somedata key;
	cout>>"Key: ";
	Cin>>key;
	cur=root;
	while (cur->data!=key && cur) cur=cur->next;if(!cur){
		cout<<"Key not found!"
		return;
	}
	Item *temp=root;
	while (temp->next!=cur) temp=temp->next;
	temp->next=cur->next;
	delete cur;
}
void Insert(){
	somedata key;
	cout>>"Key: ";
	Cin>>key;
	cur=root;
	while (cur->data!=key && cur) cur=cur->next;if(!cur){
		cout<<"Key not found!"
		return;
	}
	Item *temp=new Item;
	temp->next=cur->next;
	cin>>temp->data;
	cur->next=temp;
}
