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
//        if(UAH[0]<=UAH[1]*2) return 1;
//        else if(UAH[1]*2<=UAH[2]*5) return 2;
//        else if(UAH[2]*5<=UAH[3]*10) return 5;
//        else if(UAH[3]*10<=UAH[4]*20) return 10;
//        else if(UAH[4]*20<=UAH[5]*50) return 20;
//        else if(UAH[5]*50<=UAH[6]*100) return 50;
//        else if(UAH[6]*100<=UAH[7]*200) return 100;
//        else if(UAH[7]*200<=UAH[8]*500) return 200;
//        else return 500;
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
    void ATM::cashWithdrawal(double withdraw){
        int quantity=0;
        minWithdrawal=getMinWithdrawal();
        double withdraw_a = withdraw;
        cout<<minWithdrawal<<endl;  //DEBUG
        if (withdraw_a>=minWithdrawal){
            for(int i=8; i>=0; i--){
                // cout<<"withdraw/faceValue["<<i<<"]="<<withdraw/faceValue[i]<<endl; //DEBUG
            if(withdraw_a/faceValue[i]>=1){
                quantity+=withdraw_a/faceValue[i];
                withdraw_a-=faceValue[i]*UAH[i];
                cout<<i<<". quantity="<<quantity<<endl; //DEBUG
            }
        }
        if(quantity<=maxChangeQuantity){
            for(int i=8; i>=0; i--){
                if(withdraw/faceValue[i]>=1){
                    UAH[i]-=withdraw/faceValue[i];
                    withdraw-=faceValue[i]*UAH[i];
                }
            }
            cout<< "Withdrew " << withdraw << " UAH" << endl;
            getBalance();
        }
        else cout<<"The requested amount of money is unavailable due to lack of specific face values in  Try other sum."<<endl;
    }
    else cout<<"The requested amount of money is unavailable due to lack of money in  Try other sum."<<endl;    
    quantity=0;
    return;
    }


