#include <iostream>
using namespace std;
struct Item{
  int data;
  Item *next;
} *root, *cur, *peek, *root2;
int itemCount (Item) {
	int count = 0;
	cur = root;
	while (cur) {
		count++;
		cur = cur -> next;
	}
	return count;
}
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
void itemDestroy(Item *root){
	while(root){
		cur=root;
		root=cur->next;
		delete cur;
	}
//	if (peek) delete peek;
}
void itemView(Item *root){
	cur=root;
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
void itemMove (int countOfElements) {
	Item a;
	countOfElements = itemCount(a) - countOfElements;
	cout << "countOfElements = " << countOfElements << endl;
	cur = root;
	int i = 1;
	while (i < countOfElements) {
		cur = cur -> next;
		i++;
	}
	Item *t = cur;
	cur = cur -> next;
	root2 = cur;
	root2 -> next = cur -> next;
	t -> next = NULL;
	cur = root2;
	cout << "New stack: ";
	while (cur) {
		cout << cur -> data << " ";
		cur = cur -> next;
	}
	cout << endl;
}
void itemSplit () {
	cout << "Before: \n";
	itemView(root);
	root2 = root;
	Item *cur1 = root;
	Item *cur2 = root;
	cur = root;
	if (root -> data % 2 == 0) {
		while (cur -> data % 2 == 0 && cur->next) {
			cur1 = cur;
			cur = cur -> next;
		}
		if ((cur -> data) % 2 == 0) {
			cout << "Data structure has only even numbers!" << endl;
			return;
		}
		root2 = cur;
		cur2 = root2;
	}
	else {
		while (cur -> data % 2 != 0 && cur->next) {
			cur2 = cur;
			cur = cur -> next;
		}
		if (cur -> data % 2 != 0) {
			cout << "Data structure has only odd numbers!" << endl;
			return;
		}
		root2 = cur;
		cur1 = root2;
	}

	cur = cur -> next;
	while (cur) {
		if (cur->data % 2 == 0) {
			cur1 -> next = cur;
			cur1 = cur;
		}
		else {
			cur2 -> next = cur;
			cur2 = cur;
		}
		cur = cur -> next;
	}
	cur1 -> next = NULL;
	cur2 -> next = NULL;
}

void itemMerge () {
	cur = root2;
	cout << "New data structure: ";
	while (cur) {
		cout << cur -> data << '\t';
		cur = cur -> next;
	}
	cout << endl;
	cout << "Old ";
	itemView(root);
	cout << endl;

	Item *temp1 = root;
	Item *temp2 = root2;
	Item *cur1 = root;
	Item *cur2 = root2;

	while (cur1->next) {
		temp1 = cur1 -> next;
		while (cur1 &&cur2 && (cur2->data > cur1->data && cur2->data < cur1->next->data)) {
			temp2 = cur2;
			cur2 = cur2 -> next;
			cur1 -> next = temp2;
			cur1 = temp2;
			cur1 -> next = temp1;
		}
		cur1 = temp1;
	}

	while (cur2) {
		cur1 -> next = cur2;
		cur1 = cur2;
		cur2 = cur2 -> next;
	}
	cur1 -> next = NULL;
}