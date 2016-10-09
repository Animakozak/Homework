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
    minWithdrawal=0;
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
            cout<<i<<". UAH="<<UAH[i]<<" faceValue="<<faceValue[i]<<endl; //DEBUG
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
        bool hasNegativeValue = false;
        minWithdrawal=getMinWithdrawal();
        // cout<<"minWithdrawal="<<minWithdrawal<<endl;  //DEBUG
        if (withdraw>=minWithdrawal && withdraw<=getBalance()){
            for(int i=8; i>=0; i--){
            if(withdraw/faceValue[i]>=1 && UAH[i]>0){
              int diff=quantity;
              quantity+=withdraw/faceValue[i];
              diff=quantity-diff;
              if(diff<=UAH[i]){
                quantityDecrement[i]=diff;
                withdraw-=diff*faceValue[i];
              }
              else{
                cout<<"diff<=UAH[i] is FALSE"<<endl; //DEBUG
                quantity-=withdraw/faceValue[i];
                diff=quantity;
              }
              cout<<"quantityDecrement["<<i<<"]="<<quantityDecrement[i]<<endl; //DEBUG
              cout<<i<<". quantityDecrement["<<i<<"]*UAH["<<i<<"]="<<quantityDecrement[i]<<"*"<<UAH[i]<<"="<<quantityDecrement[i]*UAH[i]<<endl; //DEBUG
              cout<<i<<". withdraw="<<withdraw<<endl; //DEBUG
              if(quantityDecrement[i]<0) hasNegativeValue=true;
            }
            else cout<<"Skipping at"<<i<<endl; //DEBUG
          }
            if(quantity<=maxChangeQuantity || hasNegativeValue==false){
              for(int i=8; i>=0; i--){
                UAH[i]-=quantityDecrement[i];
                quantityDecrement[i]=0;
              }
              getBalance_MSG();
            }
        else cout<<"The requested amount of money is unavailable due to lack of specific face values in  Try other sum."<<endl;
    }
    else cout<<"The requested amount of money is unavailable due to lack of money in  Try other sum."<<endl;
    quantity=0;
    withdraw=0;
    return;
    }
