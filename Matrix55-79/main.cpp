#include <iostream>
#include <vector>
using namespace std;
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
    for(int i=0; i<M/2.0; i++){
      swap(mat[i],mat[M/2+i]);
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  }
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
void matrix79(){
  int M, N;
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
    }
        cout<<endl;
    }
    int max1, max;
            for (int t = 0; t < N; t++) {
                max = mat[0][0];
                for (int i = 0; i < M; i++) {
                    if (mat[i][0] > max) {
                        max = mat[i][0];
                    }
                }
                for (int j = 1; j < N; j++) {
                    max1 = mat[0][j];
                    for (int i = 1; i < M; i++) {
                        if (mat[i][j] > max1) {
                            max1 = mat[i][j];
                        }
                    }
                    if (max1 < max) {
                        for (int k = 0; k < M; k++) {
                            swap (mat[k][j], mat[k][j-1]);
                        }
                    }
                    max = max1;
                }
            }    
  for(int i=0;i<M;i++){ //Output
      for(int j=0;j<N;j++){
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
  }
}

int main(){
  cout<<"Matrix 55-79"<<endl<<"1 - matrix55.cpp"<<endl<<"2 - matrix56.cpp"<<endl<<"3 - matrix63.cpp"<<endl<<"4 - matrix62.cpp"<<endl<<"5 - matrix70.cpp"<<endl<<"6 - matrix71.cpp"<<endl<<"7 - matrix79.cpp"<<endl<<"Type file number: ";
  int choice;
  cin>>choice;
  switch (choice) {
    case 1:matrix55();break;
    case 2:matrix56();break;
    case 3:matrix63();break;
    case 4:matrix62();break;
    case 5:matrix70();break;
    case 6:matrix71();break;
    case 7:matrix79();break;
    default:break;
  }
  return 0;
}
