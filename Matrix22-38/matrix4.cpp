#include "matrixlib.h"
void matrix4(){
  int M, N, x;
  cout<<"Matrix 4:"<<endl<<"Enter M, N:"<<endl;
  cin>>M>>N;
  vector <int> ar;
  vector <vector<int> > mat;
  for(int i=0; i<N; i++){
    cin>>x;
    ar.push_back(x);
  }
  for (int i = 0; i < M; i++) {
    vector <int> row(N);
    for (int j = 0; j < N; j++) {
      row[j]=ar[j];
    }
    mat.push_back(row);
  }
  cout<<endl;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}
