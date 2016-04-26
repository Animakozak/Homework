#include "matrixlib.h"
void matrix71(){
    int M, N, min_index;
    float min;
    min=9999.9999;
    vector<vector<float> > mat;
    cout<<"Matrix 71:"<<endl<<"Enter M, N:"<<endl;
    cin>>M>>N;
    for(int k=0; k<M; k++){ //Creation
      mat.push_back(vector<float> (N));
    }
    for(int i=0;i<M;i++){ //Input
        for(int j=0;j<N;j++){
          cout<<"Enter element ";
          cin>>mat[i][j];
          if(min>mat[i][j]){
            min=mat[i][j];
            min_index=j;
          }
        }
        cout<<endl;
    }
    for(int i=0;i<M;i++){ //Deletation
      mat[i].erase(mat[i].begin()+min_index);
    }
    N--;
    for(int i=0;i<M;i++){ //Output
        for(int j=0;j<N;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  }
