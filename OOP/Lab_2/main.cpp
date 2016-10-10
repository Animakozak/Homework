#include <iostream>
#include "ATM.h"
#include "Bank.h"
using namespace std;

int main(){
    cout<<"                 Initiating bank                           "<<endl;
    Bank BetaBank;
    BetaBank.initBank();
    cout<<"Select ATM ID [i]. To exit enter 0"<<endl;
    int atmID;
    while(atmID!=0){
      cin>>atmID;
      int t=atmID-1;
      BetaBank.getBankTotalBalance_MSG();
      cout<<"------------------------ATM"<<atmID<<"---------------------------\n";
      BetaBank.bankATM[t].getBalance_MSG();
      cout<<endl<<"1 - Resuply ATM with money                           Withdraw money - 2"<<endl<<"9 - Terminate session                 Check balance - 3"<<endl;
      bool sessionTerminated = false;
      while(sessionTerminated==false){
          int input;
          cin>>input;
          if(input==1){
              BetaBank.bankATM[t].initValue();
          }
          else if(input==2){
              int request;
              cout<<"Enter requested value"<<endl;
              cin>>request;
              BetaBank.bankATM[t].cashWithdrawal(request);
          }
          else if(input==3) BetaBank.bankATM[t].getBalance_MSG();
          else if(input==9) sessionTerminated=true;
          input=0;
      }
      BetaBank.getBankTotalBalance_MSG();
    }
    cout<<"Goodbye!"<<endl;
    return 0;
}
/*
 *
*/
// cout<<"------------------------ATM---------------------------\n";
// ATM_1.getBalance_MSG();
// cout<<endl<<"1 - Resuply ATM with money                           Withdraw money - 2"<<endl<<"9 - Terminate session                 Check balance - 3"<<endl;
// bool sessionTerminated = false;
// while(sessionTerminated==false){
//     int input;
//     cin>>input;
//     if(input==1){
//         ATM_1.initValue();
//     }
//     else if(input==2){
//         int request;
//         cout<<"Enter requested value"<<endl;
//         cin>>request;
//         ATM_1.cashWithdrawal(request);
//     }
//     else if(input==3) ATM_1.getBalance_MSG();
//     else if(input==9) sessionTerminated=true;
//     input=0;
// }
