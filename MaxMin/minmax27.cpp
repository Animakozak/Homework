#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int, 10> ar;
    int ind0, ind1, quantity0, quantity1, max0, max1;
    ind0=0;
    ind1=0;
    quantity0=0;
    quantity1=0;
    max1=0;
    max0=0;
    for(int i=0; i<ar.size(); i++){
        cout<<"Vvedit 0 abo 1"<<endl;
        cin>>ar[i];
        if(!(ar[i]==1 || ar[i]==0)){
            cout<<"Element ne ye 0 abo 1!"<<endl;
            i--;
        }
    }
    for(int i=0; i<ar.size(); i++){
        if(ar[i]==0){
            quantity0++;
            if(quantity1>max1){
                max1=quantity1;
                ind1=i-max1;
            }
            quantity1=0;
        }
        else{
            quantity1++;
            if(quantity0>max0){
                max0=quantity0;
                ind0=i-max0;
            }
            quantity0=0;
        }
    }
    if(quantity0>max0){
            max0=quantity0;
            ind0=ar.size()-quantity0;
    }
    if(quantity1>max1){
        max1=quantity1;
        ind1=ar.size()-quantity1;
    }
    if(max0>max1){
        cout<<"Naybilsha poslidovnist "<<ind0<<" elementu, i vdovzhynu v "<<max0<<" elementiv"<<endl;
    }
    else if(max0<max1){
        cout<<"Naybilsha poslidovnist "<<ind1<<" elementu, i vdovzhynu v "<<max1<<" elementiv"<<endl;
    }
    else{
        if(max0>max1){
            cout<<"Persha dovga poslidovnist "<<ind0<<" vdovzhynu v "<<max0<<endl;
        }
        else{
            cout<<"Persha dovga poslidovnist "<<ind1<<" vdovzhynu v "<<max1<<endl;
        }
    }
}