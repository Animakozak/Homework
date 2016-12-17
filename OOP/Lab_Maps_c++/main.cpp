#include "dataBase.h"
using namespace std;

int main() {
    dataBase One(6);
    int choice;
    do{
        cout<<"Choose the type of input:\n1 - Console;\n2 - File"<<endl;
        cin>>choice;
    }while(choice!=1 && choice!=2);
    if(choice==1){
        One.read();
        One.disp();
    }
    else if(choice==2){
        ifstream file("d:/dataBaseOne.txt");
        One.read(&file);
        One.disp();
    }
    do{
        cout<<"Want to search for: value(2) or key(1)?"<<endl;
        int choice;
        cin>>choice;
        if(choice==1){
            string query;
            cout<<"Your query: ";
            cin>>query;
            One.find(query);
        }
        else if(choice==2){
            string query;
            cout<<"Your query: ";
            cin>>query;
            One.find(query,0);
        }
    }while(choice!=1 && choice!=2);

    return 0;
}