#include "matrixlib.h"
void matrix56(){
  int M, N;
  vector<vector<int> > mat;
  cout<<"Matrix 56:"<<endl<<"Enter M, N:"<<endl;
  cin>>M>>N;
  while(N%2!=0) cin>>N;
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
  for(int i=0; i<M; i++){
    for(int j=0; j<N/2; j++) swap(mat[i][j],mat[i][N/2+j]);
  }
  for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
  }
  }
