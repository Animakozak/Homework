#ifndef TOPLEVEL_H
#define TOPLEVEL_H
#include "level1.h"
#include "level2.h"
#include <iostream>
class toplevel:public level1, virtual public level2
{
public:
    toplevel();
    toplevel(int a);
    int toplevelA;
    ~toplevel();
};

#endif // TOPLEVEL_H
