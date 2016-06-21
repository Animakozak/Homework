//Testing push
#include <iostream>
#include <array>
using namespace std;
void shiftLeft(){
    array <float,10> a;
    int k;
    cout<<"Vvedit dovzhynu zsuvu: ";
    cin>>k;
    for(int i=0;i<a.size();i++){
        cout<<"Vvedit chyslo: ";
        cin>>a[i];
    }
    for(int i=0;i<a.size()-k;i++){
        a[i]=a[i+k];
    }
    for(int i=a.size()-k;i<a.size();i++){
        a[i]=0;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}
void shiftRightLooped(){
    int i,j,k;
    float temp;
    array <float,5> a;
    array <float,5> b;
    cout<<"Vvedit dovzhynu zsuvu (ne bilshe 4): ";
    cin>>k;
    if(!(k<4)){
        cout<<"Dovzhyna zanadto velyka!"<<endl;
    }
    else{
        for(i=0;i<a.size();i++){
        cout<<"Vvedit "<<i+1<<" element: ";
        cin>>a[i];
        }
        for(i=0;i<k;i++){
            b[i]=a[a.size()-k+i];
        }
        for(i=a.size()-1;i>=k;i--){
            a[i]=a[i-k];
        }

        for(i=0;i<k;i++){
            a[i]=b[i];
        }
        for(i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
    }

}
int main(){
    cout<<"Vyberit zavdanya:"<<endl<<"1 - Zsuv"<<endl<<"2 - Cyclichniy zsuv"<<endl;
    int k = 0;
    cin>>k;
    switch(k){
        case 1:shiftLeft();break;
        case 2:shiftRightLooped();break;
    }
    return 0;
}
