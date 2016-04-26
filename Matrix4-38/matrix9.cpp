#include "matrixlib.h"
void matrix9(){
  int M, N, x=1;
  cout<<"Matrix 9:"<<endl<<"Enter M, N:"<<endl;
  cin>>M>>N;
  vector <vector<int> > mat;
  vector <int> row(N);
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++, x++) {
      row[j]=x;
    }
    mat.push_back(row);
  }
  cout<<endl;
  for (int i = 1; i < M; i+=2) {
    for (int j = 0; j < N; j++) {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}
