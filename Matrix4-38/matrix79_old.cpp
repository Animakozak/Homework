#include "matrixlib.h"
void matrix79(){
  int M, N, max_index;
  float max;
  max=-9999.9999;
  vector<vector<float> > mat;
  vector<int> max_col;
  cout<<"Matrix 79:"<<endl<<"Enter M, N:"<<endl;
  cin>>M>>N;
  for(int k=0; k<M; k++){ //Creation
    mat.push_back(vector<float> (N));
  }
  for(int i=0;i<M;i++){ //Input
      for(int j=0;j<N;j++){
        cout<<"Enter element ";
        cin>>mat[i][j];
        if(max<mat[i][j]){
          max=mat[i][j];
          max_index=j;
        }
      }
      cout<<endl;
  }
  max_col[i]=max_index;
  max_index=0;
  max=-9999.9999;
  for(int i=0; i<M;i++){
    if(mat[i][max_col[i]]<mat[i-1][max_col[i]]){
      for(int i=0; i<M; i++){
        for(int j=0; j<2; j++) swap(mat[i][max_col[i]],mat[i][max_col[i]]);
      }
    }
  }
  for(int i=0;i<M;i++){ //Output
      for(int j=0;j<N;j++){
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
  }
}
