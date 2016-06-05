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
            itemView();
            cout<<"--End--\n";
        }
        else if(input.find("create")!=string::npos){
            if(input.find("-l")!=string::npos){
                cout<<"--Creating list--\n";
                itemCreate();
                cout<<"--List successfully created--\n You can view it with \"view\"\n";
                while(input!="exit"){
                    cin>>input;
                    if(input=="view"){
                        cout<<"--Viewing--\n";
                        itemView();
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
                        cout<<"Insering "<<value<<" at "<<key;
                        itemInsert(value, key);
                        cout<<"...Insertion complete\n";
                    }
                    else if(input=="delete"){
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
                    else if(input=="destroy"){
                        cout<<"-_-WARNING-_-\nAre you sure?\n";
                        cin>>input;
                        if(input=="yes") {
                            cout << "--Destroying root...";
                            itemDestroy();
                            cout << "data structure successfully destroyed\n";
                        }
                        else cout<<"Canceled\n";
                    }
                }
            }
            else if(input.find("-s")!=string::npos){
                cout<<"--Creating stack--\n";
                itemCreate();
                cout<<"--Stack successfully created--\n You can view it with \"view\"\n";
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
                itemDestroy();
                cout << "data structure successfully destroyed\n";
            }
            else cout<<"Canceled\n";
        }
    }
    return 0;
}
