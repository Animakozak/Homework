#include "matrixlib.h"
void matrix30(){
    int M, N;
    float quant=0;
    float aver=0;
    float sum=0;
    vector<vector<int> > mat;
    cout<<"Matrix 30:"<<endl<<"Enter M, N:"<<endl;
    cin>>M>>N;
    for(int k=0; k<N; k++){
      mat.push_back(vector<int> (N));
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){ //x++
          cout<<"Enter element ";
          cin>>mat[i][j];
          // mat[i][j]=x;
        }
        cout<<endl;
    }
    for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<"matrix end"<<endl<<endl; //
    for(int j=0; j<N; j++){
        for(int i=0; i<M; i++){
            sum=sum+mat[i][j];
        }
        cout<<"Sum = "<<sum<<endl; //
        aver=sum/(M+1.0);
        cout<<"Aver = "<<aver<<endl; //
        for(int i=0;i<M;i++){
            if(mat[i][j]>aver) quant++;
        }
        cout<<quant<<endl;
        quant=0;
        aver=0;
        sum=0;
    }
}
