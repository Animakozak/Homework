#include <iostream>
#include <cmath>
using namespace std;
#define N 10
int IsSquare(int K){
    float sq;
    sq=sqrt(K);
    if (sq-(int)sq==0) return 1;
    else return 0;
}
int main(){
    int i, j=0;
    int ar[N];
    for(i=0;i<N;i++){
        cout<<"Vvedit chyslo: ";
        cin>>ar[i];
        if (ar[i] < 0){
            cout<<"Vy vvely vidyemne chyslo\n";
            i--;
        }
        else{
            if(IsSquare(ar[i])==1) j++;
        }
    }
    cout<<"k-st chysel, yaki ye kvadratom chysla = "<<j;
    return 0;
}