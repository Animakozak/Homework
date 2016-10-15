#ifndef BANK_H
#define BANK_H
#define B 2
#include "ATM.h"
#include <iostream>
namespace std{
  class Bank
  {
    public:
      Bank();
      ATM bankATM[B];
      void initBank();
      int getBankTotalBalance();
      void getBankTotalBalance_MSG();
  };
}
#endif // BANK_H
