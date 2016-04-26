#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <float, 10> in={};
    for(int i=0; i<in.size();i++){
        cout<<"Vvedit chyslo: ";
        cin>>in[i];
    }
    array <float, 10> out;
    for(int i=0;i<out.size();i++){
        out[i]=in[i];
    }
    for(int i=0; i<in.size(); i++){
        if(i==0){
            out[0]=(in[1]+in[0])/2.0;
        }
        else if(i>0 && i<in.size()-1){
            out[i]=(in[i-1]+in[i]+in[i+1])/3.0;
        }
        else if(i==in.size()-1){
            out[out.size()-1]=(in[in.size()-2]+in[in.size()-1])/2.0;
        }
    }
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<endl;
    }
    return 0;
}
