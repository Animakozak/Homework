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
            if(input.find("-l")!=string::npos){                                                                         //List
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
                        itemAdd(value, root);
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
            else if(input.find("-s")!=string::npos){                                                                    //Stack
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
                        itemAdd(value, root);
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
            else if(input.find("-bil")!=string::npos){
                if(input.find(" 2")!=string::npos){                                                                      //BiListx2
                    while(input!="up"){
                        cin>>input;
                        if(input=="view"){
                            cout<<"--viewing--\n";
                            cout<<"--end--\n";
                        }
                    }
                }
                else{                                                                                                   //BiList
                    BiItemCreate();
                    while(input!="up"){
                        cin>>input;
                        if(input=="view"){
                            cout<<"--viewing--\n";
                            itemView(biroot);
                            cout<<"--end--\n";
                        }
                        else if(input=="rview"){
                            cout<<"--Reverse viewing--\n";
                            itemRview(biroot);
                            cout<<"--End--\n";
                        }
                        else if(input=="add"){
                            int x;
                            cin>>x;
                            cout<<"--Adding to the peek--\n";
                            itemAdd(x,biroot);
                            cout<<"--Added--\n";
                        }
                        else if(input=="mid-add"){
                            int x, y;
                            cout<<"--Adding inside the list--\n Enter value: ";
                            cin>>x;
                            cout<<"Enter position: ";
                            cin>>y;
                            itemAdd(x,y,biroot);
                            cout<<"--Added--\n";
                        }
                        else if(input=="delete"){
                            int x;
                            cout<<"--deleting--\nEnter element to delete: ";
                            cin>>x;
                            itemDelete(x,biroot);
                            cout<<"--deleted--\n";
                        }
                        else if(input=="unique"){
                            int x;
                            cout<<"--Inserting unique element--\nEnter value: ";
                            cin>>x;
                            itemAddUnique(x,biroot);
                            cout<<"--Inserted--\n";
                        }
                        else if(input=="duplicate"){
                            cout<<"--Duplicating--\n";
                            itemDuplicate(biroot);
                            cout<<"--Duplicated--\n";
                        }
                        else if(input=="shift"){
                            int k, x, c;
                            cout<<"--Shifting--\nEnter value: ";
                            cin>>x;
                            cout<<"Enter offset: ";
                            cin>>k;
                            cout<<"1 - to beginning\n2 - ending\n";
                            cin>>c;
                            if(c==1)itemShift(x,-k,biroot);
                            else if(c==2)itemShift(x,k,biroot);
                            else cout<<"Canceled\n";
                            cout<<"--End--\n";
                        }
                        else if(input=="destroy"){
                            cout<<"-_-WARNING-_-\nAre you sure?\n";
                            cin>>input;
                            if(input=="yes") {
                                cout << "--Destroying root...";
                                itemDestroy(biroot);
                                cout << "data structure successfully destroyed\n";
                            }
                            else cout<<"Canceled\n";
                        }
                        else if(input=="up"){
                            cout<<"-_-WARNING-_-\nYou are about to leave list menu, current list will be destroyed. Are you sure?\n";
                            cin>>input;
                            if(input=="yes") {
                                cout << "--Destroying biroot...";
                                itemDestroy(biroot);
                                cout << "data structure successfully destroyed\n";
                                input="up";
                            }
                            else cout<<"Canceled\n";
                        }
                    }
                }
            }
            else if(input.find("-q")!=string::npos){
                if(input.find(" 2")!=string::npos){                                                                      //Queuex2

                }
                else{                                                                                                   //Queue
                    while(input!="up"){
                        cin>>input;
                        if(input=="view"){
                            cout<<"--viewing--\n";
                            itemView(biroot);
                            cout<<"--end--\n";
                        }
                        else if(input=="rview"){
                            cout<<"--Reverse viewing--\n";
                            itemRview(biroot);
                            cout<<"--End--\n";
                        }
                        else if(input=="add"){
                            int x;
                            cin>>x;
                            cout<<"--Adding to the peek--\n";
                            itemAdd(x,biroot);
                            cout<<"--Added--\n";
                        }
                        else if(input=="delete"){
                            cout<<"--First element will be deleted--\n";
                            itemDelete(biroot);
                            cout<<"--Deleted--";
                        }
                        else if(input=="unique"){
                            int x;
                            cout<<"--Inserting unique element--\nEnter value: ";
                            cin>>x;
                            itemAddUnique(x,biroot);
                            cout<<"--Inserted--\n";
                        }
                        else if(input=="destroy"){
                            cout<<"-_-WARNING-_-\nAre you sure?\n";
                            cin>>input;
                            if(input=="yes") {
                                cout << "--Destroying root...";
                                itemDestroy(biroot);
                                cout << "data structure successfully destroyed\n";
                            }
                            else cout<<"Canceled\n";
                        }
                        else if(input=="up"){
                            cout<<"-_-WARNING-_-\nYou are about to leave list menu, current list will be destroyed. Are you sure?\n";
                            cin>>input;
                            if(input=="yes") {
                                cout << "--Destroying biroot...";
                                itemDestroy(biroot);
                                cout << "data structure successfully destroyed\n";
                                input="up";
                            }
                            else cout<<"Canceled\n";
                        }
                    }
                }
            }
            else if(input.find("-t")!=string::npos){                                                                    //Tree

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
