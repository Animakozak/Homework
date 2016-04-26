#include "vectorlib.h"
using namespace std;
int main(){
    cout<<"Samostiyna robota \"Series\", by Denys Kuznietsov"<<endl<<"Vyberit nomer zavdanya:"<<endl<<"0 - Array 116"<<endl<<"1 - 120"<<endl<<"2 - 124"<<endl<<"3 - 125"<<endl<<"4 - 128"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 0:array116();break;
        case 1:array120();break;
        case 2:array124();break;
        case 3:array125();break;
        case 4:array128();break;
        default:cout<<"Vy ne virno vvely nomer, abo takogo ne isnue"<<endl;break;
    }
        return 0;
}