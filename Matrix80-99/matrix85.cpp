#include <matrixlib.h>
void matrix85(){
    int M, x;
    vector <vector<int> > mat;
    for (int k = 0; k < M; k++) {
            mat.push_back(vector<int>(M));
    }
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>x;
            mat.pushback(x);
        }
        cout<<endl;
    }
    int i=0;
    int j=0;
    int sum=0;
    int count=0;
    int avr=0;
    for(int t=1;t<M*2;t++){
        while(i<M && j<M && j>=0){
            sum=sum+mat[i][j];
            count++;
            i++;
            j++;
        }
        avr=sum/(count+0.0);
        cout<<"Average="<<avr<<endl;
        avr=0;
        sum=0;
        count=0;
        if (t < M) {
            i = 0;
            j = M-1-t;
        }
        else {
                i = t-M+1;
                j = 0;
        }
    }
    
}