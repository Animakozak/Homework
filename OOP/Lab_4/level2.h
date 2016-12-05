#ifndef LEVEL2_H
#define LEVEL2_H
#include "base.h"
#include "base2.h"
#include <iostream>
class level2:public base2, virtual public base
{
public:
    level2();
    level2(int a);
    int level2A;
    ~level2();
};

#endif // LEVEL2_H
