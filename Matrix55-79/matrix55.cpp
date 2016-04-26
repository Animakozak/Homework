#include "matrixlib.h"
void matrix55(){
    int M, N;
    vector<vector<int> > mat;
    cout<<"Matrix 55:"<<endl<<"Enter M, N:"<<endl;
    cin>>M>>N;
    while(M%2!=0) cin>>M;
    for(int k=0; k<M; k++){
      mat.push_back(vector<int> (N));
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
          cout<<"Enter element ";
          cin>>mat[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<M/2; i++){
      swap(mat[i],mat[M/2+i]);
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  }
