#ifndef ATM_H
#define ATM_H
#define N 9
#include <iostream>
namespace std{
    class ATM
    {
        double minWithdrawal;
        int maxChangeQuantity;
        int UAH[N];
        int faceValue[N];
        public:
        ATM();
        void initValue();
        double getMinWithdrawal();
        void getBalance();
        void cashWithdrawal(double withdraw);
};
}
#endif // ATM_H
