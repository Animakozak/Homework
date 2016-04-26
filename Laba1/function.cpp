#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream f ("d://zavdanya2.txt");
    for(int i=0;i<10;i++){
    float x, y;
    cin>>x;
    y = 2.0 / x + 3;
    cout<<"f(x)"<<y<<endl;
    f<<x<<" "<<y<<endl;
    }
    return 0;
}