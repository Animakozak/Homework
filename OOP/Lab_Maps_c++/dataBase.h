//
// Created by Den on 16.12.2016.
//

#ifndef LAB_MAPS_C_DATABASE_H
#define LAB_MAPS_C_DATABASE_H

#include <map>
#include <iostream>
#include <fstream>
#include <string>
class dataBase {
public:
    int size;
    dataBase();
    dataBase(int s);
    void read();
    void read(std::ifstream &f);
    void disp();
    std::multimap <std::string, std::string> geo;
};


#endif //LAB_MAPS_C_DATABASE_H
