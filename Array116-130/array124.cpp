#include <vectorlib.h>
void array124(){
    int x, N, K, length, begin, Qelement, Q=1;
    int Qlength, Qbegin;
    cout<<"Zavdanya \"Array124\", tut seriya mozhe maty prynaymni 1 element"<<endl<<"N=";
    cin>>N;
    cout<<"(K>0) K=";
    cin>>K;
    vector <int> vector1;
    vector <int>::iterator iterator1;
    vector <int>::iterator iterator2;
    for (int i=0;i<N;i++) { //Napovnenya Massivu
        cout<<endl<<"Vvedit Element Massivy:"<<endl<<"vector1["<<i<<"]=";
        cin>>x;
        vector1.push_back(x);
    }
    int i=1;
    length=1;
    begin=1;
    for(iterator1=vector1.begin()+1;iterator1<vector1.end();iterator1++, i++){
        if(vector1[i]==vector1[i-1]) length++;
        else{
            Q++;
            if(Q-K==1){
                Qlength=length;
                iterator2=iterator1-Qlength;
                Qelement=vector1[i-1];
                vector1.erase(iterator2,iterator1);
                int t = 1;
                int Qelement2 = vector1[vector1.size()-1];
                int Qlength2 = 1;
                while(vector1[vector1.size()-t] == vector1[vector1.size()-t-1]) {
                    Qlength2++;
                    t++;
                }
                vector1.erase(vector1.end() - Qlength2, vector1.end());
                vector1.insert(iterator2, Qlength2, Qelement2);
                vector1.insert(vector1.end(), Qlength, Qelement);
                goto a;

            }
            length=1;
            begin=i-length;
        }
    }
    a:
    for (int i = 0; i < vector1.size(); i++) {
            cout << vector1[i] << endl;
    }
}
