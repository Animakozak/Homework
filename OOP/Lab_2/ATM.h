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
        int quantityDecrement[N];
        public:
          ATM();
          void initValue();
          double getMinWithdrawal();
          int getBalance();
          void getBalance_MSG();
          void cashWithdrawal(int withdraw);
};
}
#endif // ATM_H
