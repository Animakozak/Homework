//#include <vectorlib.h>
//void array116(){
//    int N, x;
//    int j;
//    cout<<"Zavdanya \"Array116\""<<endl<<"N=";
//    cin>>N;
//    vector <int> A;
//    vector <int> B={1};
//    vector <int> C;
//    for (int i = 0, j = 0; i < N; i++) { //Napovnenya Massivu A
//        cout<<endl<<"Vvedit Element Massivy A:"<<endl<<"A["<<i+1<<"]=";
//        cin>>x;
//        A.push_back(x);
//        if(i!=0 && A[i]==A[i-1]){
//            B[j]=B[j]+1;
//            C[j]=A[i];
////            cout<<j<<"\t"<<B[j]<<"\t"<<C[j]<<endl;
//        }
//        else if(B[j]!=1){
//            j++;
//            B[j]=1;
//        }
//    }
//    for(j=0;j<N;j++){
//        if(B[j]!=0) cout<<"Dovjyna serii "<<j+1<<"= "<<B[j]<<" yaka skladayetsya z "<<C[j]<<endl;
//    }
//}
#include "vectorlib.h"

void array116(){
	int n, k = 0;
	cout << "Type n: ";
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	vector <int> c(n);
	cout << " Fill array: " << endl;
	for (int i = 0; i < n; i++) cin >> a[i];
	b[k] = 1;
	c[k] = a[k];
	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1]) b[k] = b[k] + 1;
		else
		{
			k++;
			b[k] = 1;
			c[k] = a[i];
		}
	}
	cout << "Length: ";
	for (int i = 0; i < b.size(); i++)if(b[i]!=0)cout << b[i] << endl;
	cout << "Elements, which contain series: " << endl;
	for (int i = 0; i < c.size(); i++)/*if (c[i] != 0)*/cout << c[i] << endl;
}