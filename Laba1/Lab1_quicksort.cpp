//method 1
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#define N 10
#define K 2
using namespace std;
float function(float x){
    float y;
    y = 2.0 / x + 3;
    return y;
}
double quicksort(double a[][K], int left, int right) {
    int l = left;
    int r = right;
    int mid = a[(l + r) / 2][0];
    while (l <= r) {
        while ((a[l][0] < mid) && (l <= right)) {
            l++;
        }
        while ((a[r][0] > mid) && (r >= left)) {
            r--;
        }
        if (l <= r) {
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
    if (r > left) {
        quicksort(a, left, r);
    }
    if (l < right) {
        quicksort(a, l, right);
    }
    cout<<"Succes!\n";
    return 0;
}
float method1(float A, float B, float n){
	float x, m1;
	x = A;
	m1 = 0;
    float h;
    h=(B-A)/n;
	while (x < B){
		if (x != 0){
			m1 = m1 + fabs(function(x)*h);
            x = x + h;
		}
		else{
			cout << "x ne dorivnuye 0"<<endl;
			x = x + h;
		}
	}
	return m1;
}
float method2(float A, float B , float n){
	float x, m2;
	x = A;
	m2 = 0;
    float h;
    h=(B-A)/n;
	while (x < B){
		if (x != 0){
			m2 = m2 + (((fabs(function(x))+fabs(function(x+h)))/2.0)*h);
            x = x + h;
		}
		else{
			cout << "x ne dorivnuye 0"<<endl;
			x = x + h;
		}
	}
	return m2;
}
int zavdannya1(){
    int k;
    float m1, m2, A, B, n;
    cout<<"1 - metod levyh pryamougolnikov \n2 - metod trapeciy \nVvedite komandu: ";
    cin>>k;
    switch(k){
        case 1:
        cout<<"Vvedite A, B, h"<<endl;
        cin>>A>>B>>n;
        m1=method1(A, B, n);
        cout<<m1<<endl;
        break;
        case 2:
        m2=method2(A, B, n);
        cout<<"Vvedite A, B, h"<<endl;
        cin>>A>>B>>n;
        m2=method2(A, B, n);
        cout<<m2<<endl;
        break;
        default:
        cout<<"error"<<endl; break;
    }
    return 0;
}
int zavdannya2(){
    ifstream f ("d://zavdanya2.txt");
    if (!f) cout<<"Pomylka pry vidkrytti"<<endl;
    float a, b, x1, x2, Fx1, Fx2;
    double s = 0;
    f >> x1 >> Fx1;
    a=x1;
    while(!f.eof() ){
        f >> x2 >> Fx2;
        s = s + ((x2-x1)*((Fx2+Fx1)/2));
        x1=x2;
        Fx1=Fx2;
        b=x2;
    }
    cout<<"Mezhy integruvanya ["<<a<<";"<<b<<"]"<<endl;
    cout<<"Integral = "<<s<<endl;
    f.close();
    return 0;
    }
int zavdannya3(){
       ifstream file ("d://zavdanya3.txt");
    if (!file) cout << "File wasn't opened\n";
    double ar[N][K], s, a, b, x1, x2, Fx1, Fx2;
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            file >> ar[i][j];
        }
    }
    cout<<"Zchitaniy massiv"<<endl;
    a=ar[0][0];
    for(i=0;i<N;i++){
        cout<<ar[i][0]<<" "<<ar[i][1]<<endl;
    }
    b=ar[i][0];
    file.close();
    quicksort(ar,a,b);
    cout<<"Vidsortovaniy massiv"<<endl;
    for(i=0;i<N;i++){
        cout<<ar[i][0]<<" "<<ar[i][1]<<endl;
    }
    i = 0;
    s = 0;
    x1 = ar[0][0];
    Fx1 = ar[0][1];
    a = x1;
    while (i < N-1) {
        x2 = ar[i+1][0];
        Fx2 = ar[i+1][1];
        s += (Fx1 + Fx2)/2.0*(x2-x1);
        x1 = x2;
        Fx1 = Fx2;
        i++;
    }
    b = x2;
    cout << "Meji Integruvanya [" << a << ", " << b << "];" << " integral: " << s << endl;
    return 0;
}
int main(){
    int k, end;
    cout<<"1 - Zavdanya 1;\n2 - Zavdannya 2;\n3 - Zavdannya 3;\nPislya vykonannya zavdannya natisnit \"1\", dlya pidtverdjennya vyhodu\nVvedit kommandu: ";
    cin>>k;
    switch(k){
        case 1: zavdannya1(); break;
        case 2: zavdannya2(); break;
        case 3: zavdannya3(); break;
    }
    cout<<"Natysnit \"1\" dlya vyhodu"<<endl;
    cin>>end;
    if(end==1)
    return 0;
}