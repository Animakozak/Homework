#include <iostream>
using namespace std;
void DigitCountSum (int *K, int *S, int *C) {
    while (*K) {
        *S = *S + *K % 10;
        *K = *K / 10;
        *C = *C + 1;
    }
}
int main() {
    int K, S, C, i;
    for (i = 1; i <= 5; i++) {
        C = 0;
        S = 0;
        cout<<"VVedit cile: ";
        cin>>K;
        DigitCountSum (&K, &S, &C);
        cout<<"Summa: "<<S<<"\tKilkist: "<<C<<endl;
    }
    return 0;
}