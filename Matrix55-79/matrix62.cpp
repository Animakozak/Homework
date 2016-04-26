#include "matrixlib.h"
void matrix62(){
    int M, N, K;
    vector<vector<float> > mat;
    cout<<"Matrix 62:"<<endl<<"Enter M, N, K:"<<endl;
    cin>>M>>N>>K;
    while(!(K>0 && K<N)) cin>>K;
    for(int k=0; k<M; k++){ //Creation
      mat.push_back(vector<float> (N));
    }
    for(int i=0;i<M;i++){ //Input
        for(int j=0;j<N;j++){
          cout<<"Enter element ";
          cin>>mat[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<M;i++){ //Deletation
      mat[i].erase(mat[i].begin()+K-1);
    }
    N--;
    for(int i=0;i<M;i++){ //Output
        for(int j=0;j<N;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  }
