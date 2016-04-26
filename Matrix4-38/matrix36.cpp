//#include "matrixlib.h"
//void matrix36(){
//  int M, N, similarity;
//  int count, row_count;
//  count=0;
//  row_count=0;
//  vector<vector<int> > mat;
//  cout<<"Matrix 36:"<<"Enter M, N:"<<endl;
//  cin>>M>>N;
//  cout<<" Enter the quantity of elements, which is considered to be enough to state row's similarity to 1st row in matrix: ";
//  cin>>similarity;
//  while(!(similarity>0 && similarity<N)){
//    cout<<"Retry, check if \"similarity\" is less than "<<M<<" and more, than 0"<<endl;
//    cin>>similarity;
//  }
//  for(int k=0; k<M; k++){
//      mat.push_back(vector<int> (N));
//  }
//  for(int i=0;i<M;i++){
//      for(int j=0;j<N;j++){
//          cout<<"Enter element ";
//          cin>>mat[i][j];
//      }
//      cout<<endl;
//  }
//  cout<<"Debug info for dev:)"<<endl<<endl;
//  for(int i=1;i<M;i++){
//      for(int j=0;j<N;j++){
//        int k=0;
//        while(mat[i][j]!=mat[0][k] && k<N-1){
//          k++;
//        }
//        cout<<endl<<"While out! k="<<k<<endl<<mat[i][j]<<" is similar to "<<mat[0][k]<<endl;
//        if(mat[i][j]==mat[0][k]) count++;
//        k=0;
//        cout<<"count="<<count<<endl;
//      }
//      if(count>=similarity) row_count++;
//      count=0;
//      cout<<"row_count="<<row_count<<endl;
//  }
//  cout<<endl<<"Ammount of rows, similar to first is "<<row_count<<endl;
//}
#include "matrixlib.h"
void matrix36(){
  int M, N, similarity;
  int count, row_count;
  count=0;
  row_count=0;
  vector<vector<int> > mat;
  cout<<"Matrix 36:"<<"Enter M, N:"<<endl;
  cin>>M>>N;
  cout<<" Enter the quantity of elements, which is considered to be enough to state row's similarity to 1st row in matrix: ";
  cin>>similarity;
  while(!(similarity>0 && similarity<N)){
    cout<<"Retry, check if \"similarity\" is less than "<<M<<" and more, than 0"<<endl;
    cin>>similarity;
  }
  for(int k=0; k<M; k++){
      mat.push_back(vector<int> (N));
  }
  for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
          cout<<"Enter element: ";
          cin>>mat[i][j];
          while(!(mat[i][j]>=0 && mat[i][j]<=100)){
              cout<<"Huh, your number is probably not less or equal than 100 or not more or equal 0, retry: ";
              cin>>mat[i][j];
          }
      }
      cout<<endl;
  }
  cout<<"Debug info for dev:)"<<endl<<endl;
  for(int i=1;i<M;i++){
      for(int j=0;j<N;j++){
        int k=0;
        while(mat[i][j]!=mat[0][k] && k<N-1){
          k++;
        }
        cout<<endl<<"While out!"<<endl;;
        if(mat[i][j]==mat[0][k]){
            int t=0;
            while(mat[i][j]!=mat[i][t] && t<j){
                t++;
            }
            if(mat[i][j]!=mat[i][t] || j==t) count++;
            t=0;
            cout<<"k="<<k<<endl<<mat[i][j]<<" is similar to "<<mat[0][k]<<endl;
            cout<<"count="<<count<<endl;
        }
        k=0;
      }
      if(count>=similarity) row_count++;
      count=0;
      cout<<"row_count="<<row_count<<endl;
  }
  cout<<endl<<"Ammount of rows, similar to first is "<<row_count<<endl;
}
//1 2 3 4 5 6 2 0 4 0 5 1 1 2 3 8 9 10 6 1 0 2 1 2 1 1 1 1 1 1