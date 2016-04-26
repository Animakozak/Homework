#include <vectorlib.h>
void array120(){
    int x, N, length=1;
    cout<<"Zavdanya \"Array120\""<<endl<<"N=";
    cin>>N;
    vector <int> vector1;
    vector <int>::iterator iterator1;
    for (int i=0;i<N;i++) { //Napovnenya Massivu
        cout<<endl<<"Vvedit Element Massivy:"<<endl<<"vector1["<<i+1<<"]=";
        cin>>x;
        vector1.push_back(x);
    }
    int i=1;
    for(iterator1=vector1.begin()+1;iterator1<vector1.end();iterator1++, i++){
        if(vector1[i]==vector1[i-1]){
            length++;
        }
        else if (length > 1){
            vector1.erase(iterator1-1);
            iterator1--;
            length=1;
        }
        else{
            length=1;
        }
    }
    if (vector1[vector1.size() - 1] == vector1[vector1.size() - 2]) {
        vector1.erase(iterator1-1);
    }
    for(int i=0; i<vector1.size(); i++){
        cout<<vector1[i]<<endl;
    }
}
