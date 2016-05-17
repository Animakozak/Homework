#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
#define N1 6
struct point{
    int x;
    int y;
};
double point_distance(point first, point last){
    return sqrt(pow((first.x-last.x),2)+pow((first.y-last.y),2));
}
void array134(){
    cout<<"Array 134"<<endl;
    int dist=0;
    point face[N1];
    cout<<"Fill the array"<<endl;
    for(int i=0; i<N1; i++){
        cout<<"x: ";
        cin>>face[i].x;
        cout<<" y: ";
        cin>>face[i].y;
        cout<<endl;
    }
    int max=0;
    int a=0;
    int b=0;
    int max_a=0;
    int max_b=0;
    for(int i=0; i<N1; i++){
        for(int j=0; j<N1; j++){
            if(face[i].x!=face[j].x && face[i].y!=face[j].y){
                if(point_distance(face[i], face[j])>max){
                max=point_distance(face[i], face[j]);
                max_a=i;
                max_b=j;
                }
            }
        }
        if(dist<max){
            dist=max;
            a=max_a;
            b=max_b;
            max=0;
            max_a=0;
            max_b=0;
        }
    }
    if(dist!=0) cout<<"FIRST maximum distance is "<<dist<<" between ("<< face[a].x <<";"<< face[a].y <<") and ("<< face[b].x << ";" << face[b].y <<")" <<endl;
    else if(dist==0) cout<<"points are all the same"<<endl;
}
void array136(){
    cout<<"Array 136"<<endl;
    int min_sum=99999;
    point face[N1];
    int a=0;
    int min_a=0;
    int sum=0;
    cout<<"Fill the array"<<endl;
    for(int i=0; i<N1; i++){
        cout<<"x: ";
        cin>>face[i].x;
        cout<<"y: ";
        cin>>face[i].y;
        cout<<endl;
    }
    for(int i=0; i<N1; i++){
        sum=0;
        for(int j=0; j<N1; j++){
                sum=sum+point_distance(face[i], face[j]);
                min_a=i;
        }
        if(min_sum>sum){
            min_sum=sum;
            a=min_a;
            min_a=0;
        }
    }
    if(min_sum!=0) cout<<"FIRST least isolated point is ("<< face[a].x <<";"<< face[a].y <<") with the sum of "<<min_sum<<endl;
    else if(min_sum==0) cout<<"Well, that's strange :D"<<endl;
}
void array137(){
    cout<<"Array 137"<<endl;
    point face[N1];
    double p_max=-1;
    point A;
    point B;
    point C;
    int i, j;
    cout<<"Fill the array"<<endl;
    for(int i=0; i<N1; i++){
        cout<<"x: ";
        cin>>face[i].x;
        cout<<"y: ";
        cin>>face[i].y;
        cout<<endl;
    }
    for(i=0; i<N1; i++){
        double p=0;
        for(j=0; j<N1-1; j++){
            if(i!=j)p=point_distance(face[i],face[j])+point_distance(face[j],face[j+1])+point_distance(face[j+1],face[i]);
            if(p_max<p){
            p_max=p;
            if(i<=j){
                A=face[i];
                B=face[j];
                C=face[j+1];
            }
            else if(i<=j+1 && i>j){
                A=face[j];
                B=face[i];
                C=face[j+1];
            }
            else if(i>j+1){
                A=face[j];
                B=face[j+1];
                C=face[i];
            }
        }
        }
        
    }
    cout<<"Max triangular P is "<<p_max<<" formed with the following vertex: A("<<A.x<<";"<<A.y<<") B("<<B.x<<";"<<B.y<<") C("<<C.x<<";"<<C.y<<")"<<endl;
}
void array140(){
    cout<<"Array 140"<<endl;
    point face[N1];
    bool sorted=true;
    cout<<"Fill the array"<<endl;
    for(int i=0; i<N1; i++){
        cout<<"x: ";
        cin>>face[i].x;
        cout<<"y: ";
        cin>>face[i].y;
        cout<<endl;
    }
    while(sorted){
        sorted=false;
            for(int i=0; i<N1-1; i++){
            if((face[i].x+face[i].y<face[i+1].x+face[i+1].y)||((face[i].x+face[i].y==face[i+1].x+face[i+1].y)&&(face[i].x<face[i+1].x))){
                swap(face[i],face[i+1]);
                sorted=true;
            }
        }
    }
    for(int i=0; i<N1; i++){
        cout<<" ("<<face[i].x<<";"<<face[i].y<<"), ";
    }
}
int main(){
    home:
    int k;
    cout<<"Choose task: "<<endl;
    cin>>k;
    switch(k){
        case 134: array134(); break;
        case 136: array136(); break;
        case 137: array137(); break;
        case 140: array140(); break;
        default: cout<<"ERROR"<<endl;
    }
    cout<<"Type in \"home\" to go to the top, \"end\" to finish the program"<<endl;
    string exit;
    cin>>exit;
    if (exit=="home"){
        goto home;
    }
    else if(exit=="end") return 0;
}