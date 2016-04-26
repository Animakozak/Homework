#include "matrixlib.h"
void matrix70(){
    int M, N, max_index;
    float max=-9999.9999;
    vector<vector<float> > mat;
    cout<<"Matrix 70:"<<endl<<"Enter M, N:"<<endl;
    cin>>M>>N;
    max_index=0;
    for(int k=0; k<M; k++){ //Creation
      mat.push_back(vector<float> (N));
    }
    for(int i=0;i<M;i++){ //Input
        for(int j=0;j<N;j++){
          cout<<"Enter element ";
          cin>>mat[i][j];
          if(max<mat[i][j]){
            max=mat[i][j];
            max_index=i;
          }
        }
        cout<<endl;
    }
    mat.insert(mat.begin()+max_index+1, mat[max_index]);
    M++;
    for(int i=0;i<M;i++){ //Output
        for(int j=0;j<N;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  }
