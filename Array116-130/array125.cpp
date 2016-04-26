#include "vectorlib.h"
void array125(){
    vector <int> v;
    vector <int>::iterator iter;
    int x, N, L;
    cout<<"Zavdanya \"Array125\", tut seriya mozhe maty prynaymni 1 element"<<endl<<"N=";
    cin>>N;
    cout<<"(L>1) L=";
    cin>>L;
    for(int i=0;i<N;i++) { //Napovnenya Massivu
        cout<<endl<<"Vvedit Element Massivy:"<<endl<<"v["<<i<<"]=";
        cin>>x;
        v.push_back(x);
    }
    int i=1;
    int length=1;
    for(iter=v.begin()+1;iter<v.end();i++, iter++){
        if(v[i]==v[i-1]) length++;
        else if(length<L){
            v.insert(iter,0);
            v.erase(iter-length,iter);
            iter=iter-length+1;
            i=i-length+1;
            length=1;
        }
        else{
            length=1;
        }
    }
    if(length<L){
        v.erase(v.end()-length,v.end());
        v.push_back(0);
    }
    cout<<endl; //
    for (int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
    }
}






//backup copy
/*
#include "vectorlib.h"
void array125(){
    vector <int> v;
    vector <int>::iterator iter;
    int x, N, L;
    cout<<"Zavdanya \"Array125\", tut seriya mozhe maty prynaymni 1 element"<<endl<<"N=";
    cin>>N;
    cout<<"(L>1) L=";
    cin>>L;
    for(int i=0;i<N;i++) { //Napovnenya Massivu
        cout<<endl<<"Vvedit Element Massivy:"<<endl<<"v["<<i<<"]=";
        cin>>x;
        v.push_back(x);
    }
    int i=1;
    int length=1;
    for(iter=v.begin()+1;iter<v.end();i++, iter++){
        if(v[i]==v[i-1]) length++;
        else if(length<L){
            v.insert(iter,0);
//            iter--;
            v.erase(iter-length,iter);
            iter=iter-length;
            length=1;
        }
        else{
            length=1;
        }
    }
    cout<<endl; //
    for (int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
    }
}
*/