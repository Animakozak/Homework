#include <iostream>
using namespace std;
void SortInc3(float *A, float *B, float *C){
    float tmp;
    int i;
    for(i=1; i<=3; i++){
    if (*A>*B){
        tmp=*A;
        *A=*B;
        *B=tmp;
        //cout<<"A="<<*A<<", "<<"B="<<*B<<endl;
    }
    else if(*A>*C){
        tmp=*A;
        *A=*C;
        *C=tmp;
        //cout<<"B="<<*B<<", "<<"C="<<*C<<endl;
    }
    else if(*B>*C){
        tmp=*B;
        *B=*C;
        *C=tmp;
        //cout<<"A="<<*A<<", "<<"C="<<*C<<endl;
    }
    }
}
int main(){
    float A, B, C;
    int i;
    for(i=1;i<=2;i++){
        cout<<"Vvedit chyslo A: ";
        cin>>A;
        cout<<"Vvedit chyslo B: ";
        cin>>B;
        cout<<"Vvedit chyslo C: ";
        cin>>C;
        SortInc3(&A,&B,&C);
        cout<<"Chysla vidsortovani: "<<A<<","<<B<<","<<C<<endl;
    }
    return 0;
}