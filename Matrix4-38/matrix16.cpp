#include "matrixlib.h"
void matrix16(){
    int M;
    vector <vector<int> > mat;
    cout<<"Matrix 16, vvedite M: ";
    cin>>M;
    while(!(M%2!=0)) cin>>M;
    for(int i=0;i<=M;i++){
        mat.push_back(vector<int> (M));
    }
    for(int i=1; i<=M; i++){
        for(int j=1; j<=M; j++){
            cin>>mat[i][j];
        }
    }
    for(int k=1;k<=(M+1)/2; k++){
        for(int i=k;i<=M-k;i++) cout<<mat[i][k]<<" ";
        for(int j=k;j<=M-k;j++) cout<<mat[M-k+1][j]<<" ";
        for(int l=M-k+1;l>k;l--) cout<<mat[l][M-k+1]<<" ";
        for(int m=M-k+1;m>k;m--) cout<<mat[k][m]<<" ";
    }
    cout<<mat[M/2+1][M/2+1]<<endl;
}