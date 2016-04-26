#include <iostream>
#include <cmath>
using namespace std;
/*int sum(int x){
    //Calculates a sum of all numbers before "x"
    printf("--------------------------sum(K)--------------------------------\n");
    int sum = 0, i;
    for (i=1; sum<=x; i++){
        sum = sum +i;
        printf("sum=%d", sum);
    }
    printf("fsum=%d\n\n\n", sum); //sum value
    return sum;
}*/
int main(){
    int K, N;
    cout<<"Vvedit N>1"<<endl;
    cin>>N;
    if (N>1){
        K=0;
        int sum = 0;
        while(sum<N)
        {
            sum=sum + K;
            K++;
        }
        cout<<"K="<<K<<endl;
        cout<<"Sum="<<sum<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
    return 0;
}