#include <iostream>
#include <fstream>
using namespace std;
struct Item{
  int data;
  Item *next;
} *root, *cur, *peek, *root2;
struct BiItem{
	int data;
	BiItem *prev;
	BiItem *next;
}*biroot, *biroot2, *cur1, *cur2, *cur3, *cur4, *bipeek;
int itemCount (Item) {
	int count = 0;
	cur = root;
	while (cur) {
		count++;
		cur = cur -> next;
	}
	return count;
}
int itemCount (BiItem) {
	int count = 0;
	cur1 = biroot;
	while (cur1) {
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
void BiItemCreate(){
	int count;
	cout<<"Enter quantity: ";
	cin>>count;
	if(!count) return;
	biroot = new BiItem;
	biroot->next=NULL;
	biroot->prev=NULL;
	cin>>biroot->data;
	cur1 = biroot;
	cur2 = biroot;
	for(int i=1; i<count; i++){
		cur1->next=new BiItem;
		cur1=cur1->next;
		cin >> cur1 -> data;
		cur1 -> next = NULL;
		cur1 -> prev = cur2;
		cur2 = cur1;
	}
	bipeek=cur1;
}
void itemDestroy(Item *root){
	while(root){
		cur=root;
		root=cur->next;
		delete cur;
	}
}
void itemDestroy(BiItem *root){
	while(root){
		cur1=root;
		root=cur1->next;
		delete cur1;
	}
}
void itemView(Item *root){
	cur=root;
	while(cur){
		cout<<cur->data<<endl;
		cur=cur->next;
	}
}
void itemView(BiItem *root){
	cur1=root;
	while(cur){
		cout<<cur->data<<endl;
		cur=cur->next;
	}
}
void itemRview(BiItem *root) {
	cur1 = root;
	if (!cur1) return;
	while (cur1 -> next) {
		cur1 = cur1 -> next;
	}
	while (cur1) {
		cout << cur1 -> data << '\n';
		cur1 = cur1 -> prev;
	}
	cout << endl;
}
void itemAdd(int value, Item *root){
//	cur=root;
//	while(cur->next) cur=cur->next;
	cur=peek;
	cur->next=new Item;
	cur=cur->next;
	cur->next=NULL;
	cur->data=value;
	peek=cur;
}
void itemAdd(int value, BiItem *root){
//	cur1=root;
//	while(cur->next) cur=cur->next;
	cur1=bipeek;
	cur2 = cur1;
	cur1 -> next = new BiItem;
	cur1 = cur1 -> next;
	cur1 -> next = NULL;
	cur1 -> data = value;
	cur1 -> prev = cur2;
	bipeek=cur1;
}
void itemAdd(int value, int key, BiItem *root){
	cur1 = root;
	if (key == 0) {
		cur1 = new BiItem;
		cur1 -> data = value;
		cur1 -> next = root;
		root -> prev = cur1;
		cur1 -> prev = NULL;
		root = cur1;
		return;
	}
	int i = 1;
	while (i < key) {
		cur1 = cur1 -> next;
		i++;
	}
	if (cur1 -> next == NULL) {
		itemAdd(value, biroot);
		return;
	}
	BiItem *t = cur1 -> next;
	cur2 = cur1;
	cur1 -> next = new BiItem;
	cur1 = cur1 -> next;
	cur1 -> data = value;
	cur1 -> next = t;
	cur1 -> prev = cur2;
	cur2 = cur1;
	cur1 = cur1 -> next;
	cur1 -> prev = cur2;
}
void itemAddUnique(int key, BiItem *root) {
	cur1 = root;
	bool z = true;
	while (cur1) {
		if (cur1 -> data == key) {
			z = false;
			break;
		}
		cur1 = cur1 -> next;
	}
	if (!z) {
		cout << "Такой элемент уже есть!" << endl;
		return;
	}
	if (key > root -> data) {
		cur1 = root;
		int i = 1;
		while (cur1->next && key > cur1->data) {
			cur1 = cur1 -> next;
			i++;
		}
		if (cur1 -> next) {
			itemAdd(i-1,key,root);
		}
		else {
			itemAdd(key,root);
		}
	}
	else {
		itemAdd(0,key,root);
	}
}
void itemDuplicate(BiItem *root) {
	int a;
	cout << "Enter 1 to duplicate first and last BEFORE existing" << endl;
	cout << "Enter 2 to duplicate first and last AFTER existing" << endl;
	cin >> a;
	if (a == 1) {
		itemAdd(0, root->data, root);
		cur1 = root;
		int i = 1;
		while (cur1 -> next) {
			cur1 = cur1 -> next;
			i++;
		}
		itemAdd(i-1, cur1->data, root);
		itemView(root);
	}
	else if (a == 2) {
		itemAdd(1, cur1->data, root);
		cur1 = root;
		int i = 1;
		while (cur1 -> next) {
			cur1 = cur1 -> next;
			i++;
		}
		itemAdd(i, cur1->data, root);
		itemView(root);
	}
	else {
		cout << "Wrong choice!" << endl;
	}
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
void itemDelete(int key, BiItem *root){
	cur1 = root;
	while (cur1 -> data != key && cur1) {
		cur1 = cur1 -> next;
	}
	if (!cur1) {
		cout << "No such key!" << endl;
		return;
	}
	if (cur1 -> next == NULL) {
		cur2 = cur1 -> prev;
		cur2 -> next = NULL;
		delete cur1;
		return;
	}
	if (cur1 == root) {
		cur2 = cur1 -> next;
		cur2 -> prev = NULL;
		root = cur2;
		delete cur1;
		return;
	}
	cur2 = cur1 -> prev;
	cur2 -> next = cur1 -> next;
	cur2 = cur1 -> next;
	cur2 -> prev = cur1 -> prev;
	delete cur1;
}
void itemDelete(BiItem *root){
	cur1 = root;
	cur2 = cur1 -> next;
	cur2 -> prev = NULL;
	root = cur2;
	delete cur1;
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
void itemInsert (int P1, int P2, int P) {
	cur1 = biroot;
	int i = 1;
	while (i < P1 && cur1) {
		cur1 = cur1 -> next;
		i++;
	}
	if (!cur1) {
		cout << "Error!" << endl;
		return;
	}

	int z1;
	if (cur1 == biroot) {
		z1 = 1;
	}
	else {
		cur2 = cur1;
		cur1 = cur1 -> prev;
		z1 = 2;
	}

	cur3 = biroot2;
	int j = 1;
	while (j < P) {
		cur3 = cur3 -> next;
		j++;
	}
	bool z = true;
	if (cur3 -> next) {
		cur3 = cur3 -> next;
	}
	else {
		cur4 = cur3;
		z = false;
	}

	while (i <= P2 && cur2 && cur1) {
		BiItem *t;

		if (z1 == 1) {
			if (cur1 -> next == NULL) {
				t = cur1;
				biroot = NULL;
			}
			else {
				t = cur1;
				cur1 = cur1 -> next;
				cur1 -> prev = NULL;
				biroot = cur1;
			}
		}
		else if (z1 == 2) {
			if (cur2 -> next == NULL) {
				t = cur2;
				cur2 = cur2 -> prev;
				cur2 -> next = NULL;
			}
			else {
				t = cur2;
				cur1 -> next = cur2 -> next;
				cur2 = cur2 -> next;
				cur2 -> prev = cur1;
			}
		}

		cur3 -> next = t;
		if (z) {
			t -> prev = cur3;
			cur3 = cur3 -> next;
			cur3 -> next = cur4;
			cur4 -> prev = cur3;
		}
		else {
			cur3 = cur3 -> next;
			cur3 -> prev = cur4;
			cur3 -> next = NULL;
		}

		i++;
	}
	cout << "List/queue №1: ";
	itemView(biroot);
	cout << "\nList/queue №2: ";
	itemView(biroot2);
}
void itemShift(int key, int offset) {
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
    offset--;
    while (i < offset && cur) {
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
void itemShift (int key, int offset, BiItem *root) {
	cur1 = root;
	while (cur1 -> data != key && cur1) {
		cur1 = cur1 -> next;
	}
	if (!cur1) {
		cout << "Такого элемента не существует!" << endl;
		return;
	}
	BiItem *t = cur1;
	if (cur1 -> next == NULL) {
		cur1 = cur1 -> prev;
		cur1 -> next = NULL;
	}
	else if (cur1 -> prev == NULL) {
		cur1 = cur1 -> next;
		cur1 -> prev = NULL;
		root = cur1;
	}
	else {
		cur1 = cur1 -> prev;
		cur1 -> next = cur1 -> next -> next;
		cur1 = cur1 -> next;
		cur1 -> prev = cur1 -> prev -> prev;
	}
	if (offset > 0) {
		int i = 1;
		while (i < offset && cur1 -> next) {
			cur1 = cur1 -> next;
			i++;
		}
		if (cur1 -> next == NULL) {
			cur1 -> next = t;
			cur2 = cur1;
			cur1 = cur1 -> next;
			cur1 -> prev = cur2;
			cur1 -> next = NULL;
		}
		else {
			cur2 = cur1 -> next;
			cur1 -> next = t;
			t -> prev = cur1;
			t -> next = cur2;
			cur2 -> prev = t;
		}
	}
	else {
		int i = -1;
		offset = -offset;
		while (i < offset && cur1) {
			cur1 = cur1 -> prev;
			i++;
		}
		if (!cur1) {
			cur1 = root;
			cur1 -> prev = t;
			cur2 = cur1;
			cur1 = cur1 -> prev;
			cur1 -> prev = NULL;
			cur1 -> next = cur2;
			root = cur1;
		}
		else {
			cur2 = cur1 -> next;
			cur1 -> next = t;
			t -> prev = cur1;
			t -> next = cur2;
			cur2 -> prev = t;
		}
	}
	itemView(root);
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
void itemBiMove() {
	cur1 = biroot;
	cur3 = biroot2;
	while (cur3 -> next) {
		cur3 = cur3 -> next;
	}
	while (cur1 -> data != 0 && cur1) {
		BiItem *t = cur1;
		cur1 = cur1 -> next;
		cur1 -> prev = NULL;
		biroot = cur1;

		cur3 -> next = t;
		cur4 = cur3;
		cur3 = cur3 -> next;
		cur3 -> next = NULL;
		cur3 -> prev = cur4;
	}
	if (!cur1) {
		cout << "Error!" << endl;
		return;
	}
	cout << "List/queue №1: ";
	itemView(biroot);
	cout << "\nList/queue №2: ";
	itemView(biroot2);
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
void itemBiSplit(){
	ifstream fin ("d//laba4_2.txt");
	if (!fin) cout << "File not opened!" << endl;
	int x;
	bool z1 = true, z2 = true;
	while (!fin.eof()) {
		fin >> x;
		if (x % 2 != 0) {
			if (z1) {
				biroot = new BiItem;
				biroot -> data = x;
				biroot -> next = NULL;
				biroot -> prev = NULL;
				cur1 = biroot;
				cur2 = biroot;
				z1 = false;
			}
			else {
				cur1 -> next = new BiItem;
				cur1 = cur1 -> next;
				cur1 -> data = x;
				cur1 -> next = NULL;
				cur1 -> prev = cur2;
				cur2 = cur1;
			}
		}
		else {
			if (z2) {
				biroot2 = new BiItem;
				biroot2 -> data = x;
				biroot2 -> next = NULL;
				biroot2 -> prev = NULL;
				cur3 = biroot2;
				cur4 = biroot2;
				z2 = false;
			}
			else {
				cur3 -> next = new BiItem;
				cur3 = cur3 -> next;
				cur3 -> data = x;
				cur3 -> next = NULL;
				cur3 -> prev = cur4;
				cur4 = cur3;
			}
		}
	}
	fin.close();
	cout << "List/queue №1: ";
	itemView(biroot);
	cout << "\nList/queue №2: ";
	itemView(biroot2);
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
void itemBiMerge() {
	cout << "List/queue №1: ";
	itemView(biroot);
	cout << "\nList/queue №2: ";
	itemView(biroot2);

	BiItem *temp1 = biroot;
	BiItem *temp2 = biroot2;
	cur1 = biroot;
	cur2 = biroot2;

	while (cur1->next) {
		temp1 = cur1 -> next;
		while (cur1 && cur2 && (cur2->data > cur1->data && cur2->data < cur1->next->data)) {
			temp2 = cur2;
			cur2 = cur2 -> next;
			cur1 -> next = temp2;
			temp2 -> prev = cur1;
			cur1 = cur1 -> next;
			cur1 -> next = temp1;
			temp1 -> prev = cur1;
		}
		cur1 = temp1;
	}

	while (cur2) {
		cur1 -> next = cur2;
		cur2 -> prev = cur1;
		cur1 = cur1 -> next;
		cur2 = cur2 -> next;
	}
	cur1 -> next = NULL;

	cout << "List/queue: ";
	itemView(biroot);
}