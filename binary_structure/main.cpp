#include <iostream>
using namespace std;
struct datetime{
    unsigned short Year;    
    unsigned short Month;    
    unsigned short Day;    
    unsigned short Hour;    
    unsigned short Minute;    
    unsigned short Second;
};
struct datetimebinary{
    unsigned short Year:8;    
    unsigned short Month:5;    
    unsigned short Day:6;    
    unsigned short Hour:5;    
    unsigned short Minute:6;    
    unsigned short Second:6;
};
int main(){
    cout<<"Size of datetime is "<<sizeof(datetime)<<" bytes, while bit datetime is "<<sizeof(datetimebinary)<<" bytes"<<endl;
    return 0;
}