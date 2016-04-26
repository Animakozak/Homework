#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int i, sum;
    sum=0;
    ifstream f ("d://series13.txt");
    if (!f){
        cout<<("File is not opened")<<endl;
    }
    while(!f.eof() && i!=0){
    f>>i;
    if(i%2==0 && i>0){
        sum=sum+i;
        }
    }
    cout<<"sum="<<sum<<endl;
    f.close();
    return 0;    
}