#include "matrixlib.h" //Print the first number of collumn, where ALL numbers are ODD
void matrix35() {
    int M, N, Nout=0;
    float quant=0;
    vector<vector<int> > mat;
    cout<<"Matrix 35:"<<endl<<"Enter M, N:"<<endl;
    cin>>M>>N;
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
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            if (mat[i][j] % 2 != 0) quant++;
        }
        if (quant == M) {
            Nout = j+1;
            goto start;
        }
        else quant = 0;
    }
start:
    cout << Nout << endl;
}
