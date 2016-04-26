#include "vectorlib.h"
void array128(){
    vector <int> v;
    vector <int>::iterator iter;
    vector <int>::iterator max_begin;
    int x, N, max_length;
    cout<<"Zavdanya \"Array128\", tut seriya mozhe maty prynaymni 1 element"<<endl<<"N=";
    cin>>N;
    for(int i=0;i<N;i++) { //Napovnenya Massivu
        cout<<endl<<"Vvedit Element Massivy:"<<endl<<"v["<<i<<"]=";
        cin>>x;
        v.push_back(x);
    }
    int i=1;
    int length=1;
    max_length=1;
    for(iter=v.begin()+1;iter<v.end();iter++, i++){
        if(v[i]==v[i-1]) length++;
        else{
            if(length>max_length){
                max_length=length;
                max_begin=iter-length;
            }
            length=1;
        }
    }
    if(length>max_length){
        max_length=length;
        max_begin=iter-length;
    }
    cout<<"Vvedit element dlya vstavky: "<<endl;
    cin>>x;
    v.insert(max_begin+max_length,x);
    cout<<"Noviy massyv"<<endl;
    for (int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
    }    
}