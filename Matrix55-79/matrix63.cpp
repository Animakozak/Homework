#include "matrixlib.h"
void matrix63(){
    int M, N, min_index;
    float min=9999.99999;
    vector<vector<float> > mat;
    cout<<"Matrix 63:"<<endl<<"Enter M, N:"<<endl;
    cin>>M>>N;
    min_index=0;
    for(int k=0; k<M; k++){ //Creation
      mat.push_back(vector<float> (N));
    }
    for(int i=0;i<M;i++){ //Input
        for(int j=0;j<N;j++){
          cout<<"Enter element ";
          cin>>mat[i][j];
          if(min>mat[i][j]){
            min=mat[i][j];
            min_index=i;
          }
        }
        cout<<endl;
    }
    mat.erase(mat.begin()+min_index);
    M--;
    for(int i=0;i<M;i++){ //Output
        for(int j=0;j<N;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  }
