#include <iostream>
using namespace std;
struct Item{
  int data;
  Item *next;
} *root, *cur, *peek, *root2;
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
void itemDelete(){
	// cur=root;
	// while (cur) cur=cur->next;
	if (peek == root) {
		Item *temp = root;
		temp -> next = peek -> next;
		root = temp -> next;
		delete peek;
		return;
	}
	Item *temp = root;
	while (temp -> next != peek) {
		temp = temp -> next;
	}
	temp -> next = peek -> next;
	delete peek;
    peek=temp;
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
void itemShift(int key, int K) {
    cur = root;
    int i = 1;
    while (cur -> data != key && cur) {
        cur = cur -> next;
        i++;
    }
    if (!cur) {
      cout<<"Key not found!"<<endl;
        return;
    }
    Item *temp = cur;
    if (cur == root) {
        temp = cur;
        cur = cur -> next;
        root = cur;
    }
    else {
        temp = cur;
        cur = root;
        int j = 1;
        while (j < i-1) {
            cur = cur -> next;
            j++;
        }
        cur -> next = cur -> next -> next;
    }
    i = 1;
    cur = root;
    K--;
    while (i < K && cur) {
        cur = cur -> next;
        i++;
    }
    if (!cur) {
        return;
    }
    Item *temp2 = cur;
    temp2 = temp2 -> next;
    cur -> next = temp;
    temp -> next = temp2;
}
void itemMove(int first, int last){
  cur = root;
   int i = 1;
   while (cur -> next -> data != first) {
       cur = cur -> next;
       i++;
   }
   Item *temp = cur;
   cur = cur -> next;
   temp -> next = NULL;
   root2 = cur;
   while (cur -> data != last) {
       cur = cur -> next;
   }
   Item *temp2;
   temp2 = cur;
   temp2 = temp2 -> next;
   cur -> next = NULL;
   temp -> next = temp2;

   cur = root2;
   cout << "New list: ";
   while (cur) {
       cout << cur -> data << " ";
       cur = cur -> next;
   }
   cout << endl;
}
