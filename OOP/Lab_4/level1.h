#ifndef LEVEL1_H
#define LEVEL1_H
#include "base.h"
#include "base2.h"
#include <iostream>
class level1:public base2, virtual public base
{
public:
    level1();
    level1(int a);
    int level1A;
    ~level1();
};

#endif // LEVEL1_H
