//
// Created by Den on 04.06.2016.
//
#include "lr4.h"
#include <string>
int main(){
    string input;
    cout<<"\"help\" to get help"<<endl;
    while(input!="exit"){
        cin>>input;
        if(input=="help"){
            cout<<"\nhelp - show all the commands and this message\ncreate (-l,-s,-q,-t) - create new list, stack, queue, tree\nadd - add new element in the end of a list or a value to stack\'s peek\nexit - exit program\n";
        }
        else if(input=="view"){
            cout<<"--Viewing--\n";
            itemView(root);
            cout<<"--End--\n";
        }
        else if(input.find("create")!=string::npos){
            if(input.find("-l")!=string::npos){
                cout<<"--Creating list--\n";
                itemCreate();
                cout<<"--List successfully created--\n You can view it with \"view\"\nEnter \"up\" to exit list menu\n Do not forget to destroy it!\n";
                while(input!="up"){
                    cin>>input;
                    if(input=="view"){
                        cout<<"--Viewing--\n";
                        itemView(root);
                        cout<<"--End--\n";
                    }
                    else if(input=="add"){
                        cout<<"--Adding--\n";
                        int value;
                        cin>>value;
                        itemAdd(value);
                        cout<<"--Value added--\n";
                    }
                    else if(input=="insert"){
                        int key, value;
                        cout<<"Enter key: ";
                        cin>>key;
                        cout<<"Enter value: ";
                        cin>>value;
                        cout<<"Inserting "<<value<<" at "<<key;
                        itemInsert(value, key);
                        cout<<"...Insertion complete\n";
                    }
                    else if(input=="delete"){
                        cout<<"Last or specific (with a key)?";
                        cin>>input;
                        if(input=="key"){
                          cout<<"Enter key: ";
                          int key;
                          cin>>key;
                          cout<<"-_-WARNING-_-\n You are about to delete "<<key<<" Are you sure?\n";
                          cin>>input;
                          if(input=="yes"){
                              cout<<"Deleting "<<key<<"...";
                              itemDelete(key);
                              cout<<"Deleted\n";
                          }
                          else cout<<"Canceled\n";
                        }
                        else if(input=="last"){
                          cout<<"-_-WARNING-_-\n You are about to delete last element. Are you sure?\n";
                          cin>>input;
                          if(input=="yes"){
                              cout<<"Deleting...";
                              itemDelete();
                              cout<<"Deleted\n";
                          }
                          else cout<<"Canceled\n";
                        }
                    }
                    else if(input=="shift"){
                      int key, K;
                      cout<<"Enter key: ";
                      cin>>key;
                      cout<<"Enter K: ";
                      cin>>K;
                      cout<<"--Shifting "<<key<<" on "<<K;
                      itemShift(key,K);
                      cout<<"...complete--\n";
                    }
                    else if(input=="move"){
                      int first, last;
                      cout<<"--Moving--\n Enter first key: ";
                      cin>>first;
                      cout<<"Enter last key: ";
                      cin>>last;
                      cout<<"Moving:"<<endl;
                      itemMove(first,last);
                      cout<<"\nMoving complete\n";
                    }
                    else if(input=="split"){
                        cout<<"--Splitting--\nSplitting list into even and odd lists\n";
                        itemSplit();
                        cout<<"root\n";
                        itemView(root);
                        cout<<"root2\n";
                        itemView(root2);
                        cout<<"--Splitted--\n";
                    }
                    else if(input=="merge"){
                        cout<<"--Merging--\nPlease enter new data\n";
                        itemMerge();
                        cout<<"--Merged--\n";
                    }
                    else if(input=="destroy"){
                        cout<<"-_-WARNING-_-\nAre you sure?\n";
                        cin>>input;
                        if(input=="yes") {
                            cout << "--Destroying root...";
                            itemDestroy(root);
                            cout << "data structure successfully destroyed\n";
                        }
                        else cout<<"Canceled\n";
                    }
                    else if(input=="up"){
                        cout<<"-_-WARNING-_-\nYou are about to leave list menu, current list will be destroyed. Are you sure?\n";
                        cin>>input;
                        if(input=="yes") {
                            cout << "--Destroying root...";
                            itemDestroy(root);
                            cout << "data structure successfully destroyed\n";
                            cout<<"--Destroying root2...";
                            itemDestroy(root2);
                            cout << "data structure successfully destroyed\n";
                            input="up";
                        }
                        else cout<<"Canceled\n";
                    }
                }
            }
            else if(input.find("-s")!=string::npos){
                cout<<"--Creating stack--\n";
                itemCreate();
                cout<<"--Stack successfully created--\n You can view it with \"view\"\n\nEnter \"up\" to exit list menu\n Do not forget to destroy it!\n";
                while(input!="up"){
                    cin>>input;
                    if(input=="view"){
                    cout<<"--Viewing--\n";
                    itemView(root);
                    cout<<"--End--\n";
                }
                    else if(input=="add"){
                        cout<<"--Adding--\n";
                        int value;
                        cin>>value;
                        itemAdd(value);
                        cout<<"--Value added--\n";
                    }
                    else if(input=="delete"){
                      cout<<"-_-WARNING-_-\n You are about to delete last element. Are you sure?\n";
                      cin>>input;
                      if(input=="yes"){
                          cout<<"Deleting...";
                          itemDelete();
                          cout<<"Deleted\n";
                      }
                      else cout<<"Canceled\n";
                    }
                    else if(input=="move"){
                        int count;
                        cout<<"--Moving--\n";
                        cout<<"Enter quantity of elements to move: ";
                        cin>>count;
                        itemMove(count);
                        cout<<"Elements moved to new stack:\n";
                        itemView(root);
                        itemView(root2);
                        cout<<"--Moved--\n";
                    }
                    else if(input=="split"){
                        cout<<"--Splitting--\nSplitting stack into even and odd stacks\n";
                        itemSplit();
                        cout<<"root\n";
                        itemView(root);
                        cout<<"root2\n";
                        itemView(root2);
                        cout<<"--Splitted--\n";
                    }
                    else if(input=="merge"){
                        cout<<"--Merging--\nPlease enter new data\n";
                        itemMerge();
                        cout<<"--Merged--\n";
                    }
                    else if(input=="destroy"){
                        cout<<"-_-WARNING-_-\nAre you sure?\n";
                        cin>>input;
                        if(input=="yes") {
                            cout << "--Destroying root...";
                            itemDestroy(root);
                            cout << "data structure successfully destroyed\n";
                        }
                        else cout<<"Canceled\n";
                    }
                    else if(input=="up"){
                        cout<<"-_-WARNING-_-\nYou are about to leave list menu, current list will be destroyed. Are you sure?\n";
                        cin>>input;
                        if(input=="yes") {
                            cout << "--Destroying root...";
                            itemDestroy(root);
                            cout << "data structure successfully destroyed\n";
                            cout<<"--Destroying root2...";
                            itemDestroy(root2);
                            cout << "data structure successfully destroyed\n";
                            input="up";
                        }
                        else cout<<"Canceled\n";
                    }
                }
            }
            else if(input.find("-q")!=string::npos){

            }
            else if(input.find("-t")!=string::npos){

            }
            else{
                cout<<"Use flag to specify the query\n";
            }
        }
        else if(input=="destroy"){
            cout<<"-_-WARNING-_-\nAre you sure?\n";
            cin>>input;
            if(input=="yes") {
                cout << "--Destroying root...";
                itemDestroy(root);
                cout << "data structure successfully destroyed\n";
            }
            else cout<<"Canceled\n";
        }
    }
    return 0;
}
