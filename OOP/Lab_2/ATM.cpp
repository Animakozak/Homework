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
    void ATM::getBalance(){
        double sum=0;
        for(int i=0; i<9; i++){
            cout<<i<<". UAH="<<UAH[i]<<" faceValue="<<faceValue[i]<<endl; //DEBUG
            sum+=UAH[i]*faceValue[i];
        }
        cout << "Current balance of the ATM is: " << sum << " UAH" << endl;
        return;
    }
    void ATM::cashWithdrawal(int withdraw){
        int quantity=0;
        minWithdrawal=getMinWithdrawal();
        int withdraw_a = withdraw;
        cout<<"minWithdrawal="<<minWithdrawal<<endl;  //DEBUG
        if (withdraw_a>=minWithdrawal){
            for(int i=8; i>=0; i--){
            if(withdraw_a/faceValue[i]>=1){
              int diff=quantity;
              quantity+=withdraw_a/faceValue[i];
              diff=quantity-diff;
              withdraw_a-=diff*faceValue[i];
            }
        }
        if(quantity<=maxChangeQuantity){
            for(int i=8; i>=0; i--){
                if(withdraw/faceValue[i]>=1){
                  int diff=UAH[i];
                  UAH[i]-=withdraw/faceValue[i];
                  diff-=UAH[i];
                  withdraw-=diff*faceValue[i];
                  cout<<i<<". faceValue["<<i<<"]*UAH["<<i<<"]="<<faceValue[i]<<"*"<<UAH[i]<<"="<<faceValue[i]*UAH[i]<<endl; //DEBUG
                  cout<<i<<". withdraw="<<withdraw<<endl; //DEBUG
                }
            }
            cout<< "Withdrew " << withdraw << " UAH" << endl;
            getBalance();
        }
        else cout<<"The requested amount of money is unavailable due to lack of specific face values in  Try other sum."<<endl;
    }
    else cout<<"The requested amount of money is unavailable due to lack of money in  Try other sum."<<endl;
    quantity=0;
    withdraw=0;
    withdraw_a=0;
    return;
    }
