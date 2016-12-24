//
// Created by Den on 16.12.2016.
//

#include "dataBase.h"
dataBase::dataBase() {
    size=10;
}
dataBase::dataBase(int s) {
    size=s;
}
void dataBase::read() {
    std::cout<<"Reading console input"<<std::endl;
    for(int i=0; i<size; i++){
        std::string co;
        std::string ci;
        std::cout<<"Country City: ";
        std::cin>>co>>ci;
        geo.insert(std::pair<std::string,std::string>(co,ci));
    }
    std::cout<<"End"<<std::endl;
}
void dataBase::read(std::ifstream *f){
    std::cout<<"Reading file input"<<std::endl;
    if(!*f) std::cout<<"Error! File not loaded"<<std::endl;
    else{
        for(int i=0; i<size; i++){
            std::string co;
            std::string ci;
            *f>>co>>ci;
            geo.insert(std::pair<std::string,std::string>(co,ci));
        }
    }
    f->close();
}
void dataBase::disp() {
    std::cout<<"List: "<<std::endl;
    for(std::multimap<std::string,std::string>::iterator it=geo.begin(); it!=geo.end(); it++){
        std::cout<<it->first<<" - "<<it->second<<std::endl;
    }
}
void dataBase::find(std::string query) {
    std::cout<<"There are "<<geo.count(query)<<" results:"<<std::endl;
    for(std::multimap<std::string,std::string>::iterator it=geo.equal_range(query).first; it!=geo.equal_range(query).second; it++){
        std::cout<<it->second<<std::endl;
    }
}
void dataBase::find(std::string q, int i) {
    std::multimap<std::string,std::string>::iterator it;
    for(it=geo.begin(); it!=geo.end(); it++){
        if(it->second==q){
            std::cout<<"Found: "<<it->first<<"\n";
            break;
        }
    }
    if(it==geo.end()) std::cout<<"Nothing was found\n";
}