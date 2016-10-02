#ifndef ATM_H
#define ATM_H

namespace std
{

class ATM
{
public:
    private:
    double minWithdrawal;
    int maxChangeQuantity;
    int UAH[9];
    int faceValue[9];
    public:
    ATM(){
        UAH={0,0,0,0,0,0,0,0,0};
        faceValue={1,2,5,10,20,50,100,200,500};
        minWithdrawal=0;
        maxChangeQuantity=50;
    };
    void initValue(int fiveHh, int twoHh, int oneHh, int fiftyh, int twentyh, int tenh, int fiveh, int twoh, int oneh){
        UAH[0]=oneh;
        UAH[1]=twoh;
        UAH[2]=fiveh;
        UAH[3]=tenh;
        UAH[4]=twentyh;
        UAH[5]=fiftyh;
        UAH[6]=oneHh;
        UAH[7]=twoHh;
        UAH[8]=fiveHh;
        return;
    }
    double getMinWithdrawal(){
//        if(ATM.UAH[0]<=ATM.UAH[1]*2) return ATM.UAH[0];
//        else if(ATM.UAH[1]*2<=ATM.UAH[2]*5) return ATM.UAH[1]*2;
//        else if(ATM.UAH[2]*5<=ATM[3]*10) return ATM.UAH[2]*5;
//        else if(ATM.UAH[3]*10<=ATM[4]*20) return ATM.UAH[3]*10;
//        else if(ATM.UAH[4]*20<=ATM[5]*50) return ATM.UAH[4]*20;
//        else if(ATM.UAH[5]*50<=ATM[6]*100) return ATM.UAH[5]*50;
//        else if(ATM.UAH[6]*100<=ATM[7]*200) return ATM.UAH[6]*100;
//        else if(ATM.UAH[7]*200<=ATM[8]*500) return ATM.UAH[7]*200;
//        else return ATM.UAH[8]*500;
        int i;
        for(i=0;i<9;i++){
            if(ATM.UAH[i]*ATM.faceValue[i]<=ATM.UAH[i+1]*ATM.faceValue[i+1]) break;
        }
        return ATM.UAH[i]*ATM.faceValue[i];
    }
    void getBalance(){
        double sum=0;
        for(int i=0; i<9; i++){
            sum+=ATM.UAH[i]*ATM.faceValue[i];
        }
        cout << "Current balance is: " << sum << " UAH" << endl;
        return;
    }
    void cashWithdrawal(double withdraw){
        int quantity=0;
        ATM.minWithdrawal=getMinWithdrawal();
        if (withdraw<=ATM.minWithdrawal){
            for(int i=8; i<=0; i--){
                if(withdraw/ATM.faceValue[i]>=1){
                    quantity+=withdraw/ATM.faceValue[i];
                }
            }
            if(quantity<=maxChangeQuantity){
                for(int i=8; i<=0; i--){
                    if(withdraw/ATM.faceValue[i]>=1){
                        ATM.UAH[i]-=withdraw/ATM.faceValue[i];
                        withdraw-=ATM.faceValue[i]*ATM.UAH[i];
                    }
                }
                cout<< "Withdrew " << withdraw << " UAH" << endl;
                getBalance();
            }
            else cout<<"The requested amount of money is unavailable due to lack of specific face values in ATM. Try other sum."<<endl;
            quantity=0;
        }
        else cout<<"The requested amount of money is unavailable due to lack of money in ATM. Try other sum."<<endl;
        return;
    }
};
}

#endif // ATM_H
