#include "Bank.h"
using namespace std;
Bank::Bank(){
};
void Bank::initBank(){
  for(int i=0; i<B; i++){
    cout<<"ATM #"<<i<<endl;
    bankATM[i].initValue();
  }
  return;
}
int Bank::getBankTotalBalance(){
  int bankTotalBalance=0;
  for (int i=0; i<B; i++){
    bankTotalBalance+=bankATM[i].getBalance();
  }
  return bankTotalBalance;
}
void Bank::getBankTotalBalance_MSG(){
  cout<<"Bank total balance = "<<getBankTotalBalance()<<endl;
  return;
}
