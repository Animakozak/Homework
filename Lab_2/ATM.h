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
    int UAH1;
    int UAH2;
    int UAH5;
    int UAH10;
    int UAH20;
    int UAH50;
    int UAH100;
    int UAH200;
    int UAH500;
    public:
    ATM(){
        UAH1=0;
        UAH2=0;
        UAH5=0;
        UAH10=0;
        UAH20=0;
        UAH50=0;
        UAH100=0;
        UAH200=0;
        UAH500=0;
        minWithdrawal=0;
        maxChangeQuantity=0;
    };
    initValue(int fiveHh, int twoHh, int oneHh, int fiftyh, int twentyh, int tenh, int fiveh, int twoh, int oneh){
        UAH1=oneh;
        UAH2=twoh;
        UAH5=fiveh;
        UAH10=tenh;
        UAH20=twentyh;
        UAH50=fiftyh;
        UAH100=oneHh;
        UAH200=twoHh;
        UAH500=fiveHh;
    }
    int getMaxChangeQuantity(ATM.UAH1, ATM.UAH2, ATM.UAH5, ATM.UAH10, ATM.UAH20, ATM.UAH50, ATM.UAH100, ATM.UAH200, ATM.UAH500){
       return UAH1+UAH2+UAH5+UAH10+UAH20+UAH50+UAH100+UAH200+UAH500;
    }
    double getMinWithdrawal(ATM.UAH1, ATM.UAH2, ATM.UAH5, ATM.UAH10, ATM.UAH20, ATM.UAH50, ATM.UAH100, ATM.UAH200, ATM.UAH500){
        if(ATM.UAH1<=ATM.UAH2*2) return UAH1;
        
    }
    getValue(){}
};
}

#endif // ATM_H
