#include "matrixlib.h"
void matrix14(){
    int M, x;
    vector <vector<int> > mat;
    cout<<"Matrix 14, vvedite M: ";
    cin>>M;
    for(int i=0;i<M;i++){
        mat.push_back(vector<int> (M));
    }
    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
            cin>>mat[i][j];
        }
    }
    for(int j = 0; j < M; j++) {
            for (int i = 0; i < M-j; i++) {
                cout << mat[i][j] << " ";
            }
            for (int k = j+1; k < M; k++) {
                cout << mat[M-j-1][k] << " ";
            }
            cout << endl;
    }
}