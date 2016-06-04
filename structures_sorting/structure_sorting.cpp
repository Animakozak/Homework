#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct STUD{
  string Name;
  string GROUP;
  float SES[4];
};
int main(){
    cout<<"Welcome!"<<endl<<"Please enter information about students:"<<endl;
    STUD STUD1[5];
    cout<<"Manually or import from file?"<<endl;
    string input;
    cin>>input;
    if (input=="manually"){
        cin.clear();
        cin.ignore();
        for(int k=0; k<5; k++){
        cout<<"Enter student's name: ";
        getline(cin,STUD1[k].Name);
        cout<<"Enter student's group: ";
        getline(cin,STUD1[k].GROUP);
        for(int i=0; i<4; i++){
            cout<<"Enter student's marks ("<<i+1<<"of4)";
            cin>>STUD1[k].SES[i];
        }
        cin.clear();
        cin.ignore(); 
        }
    }
    else if(input=="import"){
        cin.clear();
        cin.ignore();
        ifstream f ("d://Denis//Homework//structures_sorting//list.txt");
        if (!f) cout<<"Pomylka pry vidkrytti"<<endl;
        for(int k=0; k<5; k++){
    //        cout<<"Enter student's name: ";
            getline(f,STUD1[k].Name);
    //        cout<<"Enter student's group: ";
            getline(f,STUD1[k].GROUP);
            for(int i=0; i<4; i++){
    //            cout<<"Enter student's marks ("<<i+1<<"of4)";
                f>>STUD1[k].SES[i];
            }
            f.clear();
            f.ignore(); 
        }
        f.close();
    }
    else cout<<"That should not have happened...wierd"<<endl;
    STUD ORIGINAL[5];
    for(int i=0; i<5; i++){
        ORIGINAL[i]=STUD1[i];
    }
    STUD SORTED_AL[5];
    for(int i=0; i<5; i++){
        SORTED_AL[i]=ORIGINAL[i];
    }
    bool sorted=true;
    while(sorted){
            sorted=false;
            for(int i=1; i<5; i++){
                if(SORTED_AL[i-1].Name>SORTED_AL[i].Name){
                    swap(SORTED_AL[i-1],SORTED_AL[i]);
                    sorted=true;
                }
            }
    }
    cout<<"Here is the original list: "<<endl;
    cout<<"Name\t\tGroup\tSES(1)\tSES(2)\tSES(3)\tSES(4)\t"<<endl;
    for(int i=0; i<5; i++){
        cout<<ORIGINAL[i].Name<<"\t"<<ORIGINAL[i].GROUP<<"\t"<<ORIGINAL[i].SES[0]<<"\t"<<ORIGINAL[i].SES[1]<<"\t"<<ORIGINAL[i].SES[2]<<"\t"<<ORIGINAL[i].SES[3]<<"\t"<<endl;
    }
    
    cout<<endl<<"We sorted it alphabeticaly: "<<endl;
    cout<<"Name\t\tGroup\tSES(1)\tSES(2)\tSES(3)\tSES(4)\t"<<endl;
    for(int i=0; i<5; i++){
        cout<<SORTED_AL[i].Name<<"\t"<<SORTED_AL[i].GROUP<<"\t"<<SORTED_AL[i].SES[0]<<"\t"<<SORTED_AL[i].SES[1]<<"\t"<<SORTED_AL[i].SES[2]<<"\t"<<SORTED_AL[i].SES[3]<<"\t"<<endl;
    }
    cout<<endl<<"Here are students with excel:"<<endl;
    STUD EXCEL[5];
    int k=0;
    for(int i=0; i<5; i++){
        if((SORTED_AL[i].SES[0]+SORTED_AL[i].SES[1]+SORTED_AL[i].SES[2]+SORTED_AL[i].SES[3])/4.0>4.2){
            EXCEL[k]=SORTED_AL[i];
            k++;
        }
    }
    sorted=true;
    while(sorted){
            sorted=false;
            for(int i=1; i<k; i++){
                if(((EXCEL[i].SES[0]+EXCEL[i].SES[1]+EXCEL[i].SES[2]+EXCEL[i].SES[3])/4.0)>((EXCEL[i-1].SES[0]+EXCEL[i-1].SES[1]+EXCEL[i-1].SES[2]+EXCEL[i-1].SES[3])/4.0)){
                    swap(EXCEL[i-1],EXCEL[i]);
                    sorted=true;
                }
            }
    }
    if(EXCEL[0].SES[0]){
        cout<<"Name\t\tGroup\tSES(1)\tSES(2)\tSES(3)\tSES(4)\t"<<endl;
        for(int i=0; i<k; i++){
        cout<<EXCEL[i].Name<<"\t"<<EXCEL[i].GROUP<<"\t"<<EXCEL[i].SES[0]<<"\t"<<EXCEL[i].SES[1]<<"\t"<<EXCEL[i].SES[2]<<"\t"<<EXCEL[i].SES[3]<<"\t"<<endl;
        }
    }
    else{
        cout<<"There are no appealing studens :("<<endl;
    }
    ofstream ratingFile ("d://Denis//Homework//structures_sorting//rating.txt");
    ratingFile<<"Name\t\tGroup\tSES(1)\tSES(2)\tSES(3)\tSES(4)\t"<<endl;
    for(int i=0; i<k; i++){
        ratingFile<<EXCEL[i].Name<<"\t"<<EXCEL[i].GROUP<<"\t"<<EXCEL[i].SES[0]<<"\t"<<EXCEL[i].SES[1]<<"\t"<<EXCEL[i].SES[2]<<"\t"<<EXCEL[i].SES[3]<<"\t"<<endl;
    }
    ratingFile.close();
    string exit;
    cin>>exit;
    return 0;
}