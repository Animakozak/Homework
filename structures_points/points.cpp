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
    else if(dis=0) cout<<"points are all the same"<<endl;
}
void array136(){
    cout<<"Array 136"<<endl;
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
    int min=0;
    int a=0;
    int b=0;
    int min_a=0;
    int min_b=0;
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
    else if(dis=0) cout<<"points are all the same"<<endl;
}
int main(){
    home:
    int k;
    cout<<"Choose task: "<<endl;
    cin>>k;
    switch(k){
        case 134: array134(); break;
        case 136: array136(); break;
        default: cout<<"ERROR"<<endl;
    }
    cout<<"Type in \"Home\" to go to the top, \"End\" to finish the program"<<endl;
    string exit;
    cin>>exit;
    if (exit=="Home"){
        goto home;
    }
    else return 0;
}