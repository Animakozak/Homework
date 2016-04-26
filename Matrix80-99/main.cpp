#include <iostream>
#include <vector>
using namespace std;
void matrix85(){
    int M;
    cout<<"Enter matrix size: ";
    cin>>M;
    vector <vector<int> > mat;
    for (int k = 0; k < M; k++) {
            mat.push_back(vector<int>(M));
    }
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>mat[i][j];
        }
    }
    int sum=0;
    int count=0;
        int i = 0;
        int j = 0;
        for (int t = 1; t < 2*M; t++) {
            while (i < M && j < M && j >= 0 && i >= 0) {
                sum = sum + mat[i][j];
                i++;
                j--;
                count++;             
            }
            cout << "average: " << sum/(count+0.0) << endl;
            if (t < M) {
                i = 0;
                j = t;
            }
            else {
                i = t-M+1;
                j = M-1;
            }
            sum = 0;
            count = 0;
        }
    }
void matrix88(){
    int M;
    cout<<"Enter matrix size: ";
    cin>>M;
    vector <vector<int> > mat;
    for (int k = 0; k < M; k++) {
            mat.push_back(vector<int>(M));
    }
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>mat[i][j];
        }
    }
    int i, j;
    for(i=1;i<M;i++){
        for(j=0;j<i;j++){
            mat[i][j]=0;
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }
}
void matrix95(){
    int M;
    cout<<"Enter matrix size: ";
    cin>>M;
    vector <vector<int> > mat;
    for (int k = 0; k < M; k++) {
            mat.push_back(vector<int>(M));
    }
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>mat[i][j];
        }
    }
    int t=0;
    for(int i=M/2;i<M;i++){
        if(M%2==0){
            for(int j=M/2-t-1;j<=i;j++){
                mat[i][j]=0;
            }
        }
        else{
            for(int j=M/2-t;j<=i;j++){
                mat[i][j]=0;
            }
        }
        t++;
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }
}
void matrix96(){
    int M;
    cout<<"Enter matrix size: ";
    cin>>M;
    vector <vector<int> > mat;
    for (int k = 0; k < M; k++) {
            mat.push_back(vector<int>(M));
    }
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=1;i<M;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }    
}
void matrix100(){
int M;
    cout<<"Enter matrix size: ";
    cin>>M;
    vector <vector<int> > mat;
    for (int k = 0; k < M; k++) {
            mat.push_back(vector<int>(M));
    }
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<M;i++){
        for(int j=M-1-i;j>=0;j--){
            swap(mat[i][j],mat[M-1-j][M-1-i]);
        }
    }
    for(int i=0;i<M/2;i++){
        swap(mat[i], mat[M-1-i]);
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }        
}
int main(){
    cout<<"Matrix 85-99"<<endl<<"1 - matrix85.cpp"<<endl<<"2 - matrix88.cpp"<<endl<<"3 - matrix95.cpp"<<endl<<"4 - matrix96.cpp"<<endl<<"5 - matrix100.cpp"<<endl<<"Type file number: ";
    int choice;
    cin>>choice;
    switch (choice) {
    case 1:matrix85();break;
    case 2:matrix88();break;
    case 3:matrix95();break;
    case 4:matrix96();break;
    case 5:matrix100();break;
    default:break;
  }
    return 0;
}