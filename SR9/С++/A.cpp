#include <iostream>
#define N 5
int main(){
    int i;
    float d, o, c;
    o =1;
    c =1;
    float A[N];
    for(i=0; i<N; i++){
        cin>>A[i];
        if(A[i]<=0){
            cout<<"Vy vvely chyslo, ne bilshe 0\n";
            i--;
        }
        else{
            d = 1 - (A[i] - floor(A[i]));
            cout<<"Znachenya, yakogo ne vystachaye do nayblyzhchogo cilogo:"<<d<<endl;;
            if(d<=o){
                c=A[i]+d;
            cout<<"Nayblyzhche cile: "<<c<<endl;
            }
        }
    }
    return 0;
}