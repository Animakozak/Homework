#include "ATM.h"
using namespace std;
ATM::ATM(){
    faceValue[0]=1;
    faceValue[1]=2;
    faceValue[2]=5;
    faceValue[3]=10;
    faceValue[4]=20;
    faceValue[5]=50;
    faceValue[6]=100;
    faceValue[7]=200;
    faceValue[8]=500;
    minWithdrawal=1;
    maxChangeQuantity=50;
};
void ATM::initValue(){
        for(int i=0;i<9;i++){
            cin>>UAH[i];
            quantityDecrement[i]=0;
        }
        cout<<"Complete\n";
        return;
    }
    double ATM::getMinWithdrawal(){
        int i;
        for(i=0;i<9;i++){
            if(UAH[i]*faceValue[i]<=UAH[i+1]*faceValue[i+1]) break;
        }
        return faceValue[i];
    }
    int ATM::getBalance(){
        int sum=0;
        for(int i=0; i<9; i++){
            // cout<<i<<". UAH="<<UAH[i]<<" faceValue="<<faceValue[i]<<endl; //DEBUG
            sum+=UAH[i]*faceValue[i];
        }
        return sum;
    }
    void ATM::getBalance_MSG(){
      int sum = getBalance();
      cout << "Current balance of the ATM is: " << sum << " UAH" << endl;
    }
    void ATM::cashWithdrawal(int withdraw){
        int quantity=0;
        minWithdrawal=getMinWithdrawal();
        if (withdraw>=minWithdrawal && withdraw<=getBalance()){
            for(int i=8; i>=0; i--){
            if(withdraw/faceValue[i]>=1 && UAH[i]>0){
              int diff=quantity;
              quantity+=withdraw/faceValue[i];
              diff=quantity-diff;
              if(diff>=UAH[i]){
                quantityDecrement[i]=UAH[i];
                diff-=UAH[i];
                quantity+=diff;
                quantity-=withdraw/faceValue[i];
                withdraw-=UAH[i]*faceValue[i];
              }
              else{
                quantityDecrement[i]=diff;
                withdraw-=diff*faceValue[i];
              }
            }
          }
            if(quantity<=maxChangeQuantity){
              for(int i=8; i>=0; i--){
                UAH[i]-=quantityDecrement[i];
              }
              getBalance_MSG();
            }
        else cout<<"The requested amount of money is unavailable due to lack of specific face values in  Try other sum."<<endl;
        for (int i=0; i<9;i++){
          quantityDecrement[i]=0;
        }
    }
    else cout<<"The requested amount of money is unavailable due to lack of money in  Try other sum."<<endl;
    return;
    }
