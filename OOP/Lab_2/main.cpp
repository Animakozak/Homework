#include <iostream>
#include "ATM.h"
using namespace std;

int main(){
    ATM ATM_1;
    cout<<"------------------------ATM---------------------------\n";
    ATM_1.getBalance();
    cout<<endl<<"1 - Resuply ATM with money                           Withdraw money - 2"<<endl<<"9 - Terminate session                 Check balance - 3"<<endl;
    bool sessionTerminated = false;
    while(sessionTerminated==false){
        int input;
        cin>>input;
        ATM ATM_1;
        if(input==1){
            ATM_1.initValue();
        }
        else if(input==2){
            double request;
            cout<<"Enter requested value"<<endl;
            cin>>request;
            ATM_1.cashWithdrawal(request);
        }
        else if(input==9) sessionTerminated=true;
        else if(input==3) ATM_1.getBalance();
        input=0;
    }
    return 0;
}
/*
 * 
*/