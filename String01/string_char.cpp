#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// char wordSwap(char stroke, char pos_1, int len_1, char pos_2, len_2){
//     char buffer[100]="\0";
//     strcpy(buffer, word2_pos, word2_len);
// }
// string wordSwap(string stroke, int pos1, int len_1, int pos_2, len_2){
//
// }
void string1(){
    cout<<"Enter your test line: "<<endl;
    string S="Meanwhilewhile at the Batcave...";
    string target="while";
    cout<<S<<endl;
    S.erase(S.find(target), target.size());
    cout<<S<<endl;
}
void string2(){
    string input="These are not the droids you are looking f, fanta";
    cout<<input<<endl;
    string add="or";
    input.insert(input.find("f")+1, add);
    cout<<input<<endl;
}
void string3(){
    string S="We are fine.re you.?";
    cout<<S<<endl;
    string X=" How angular js can be difficult to learn?";
    cout<<X<<endl;
    S.insert(S.find(".")+1, X, 0, 6);
    cout<<S<<endl;
}
void string4(){
    string input="Buying, using, breaking, fixing, trashing, mailing, check - upgrading, charging, pointing, zooming, pressing, snapping, working, quick - erasing...";
    string target="ing";
    cout<<input<<endl;
    int count=0;
    int j=0;
    for(int k=0; k<input.size(); j=input.find("ing",k)){
        cout<<"Before k="<<k<<"j="<<j<<endl;
        if(k<j){count++; k=j;}
        else k++;
        cout<<"After k="<<k<<"j="<<j<<endl<<endl;
    }
    cout<<count<<endl;
}
// void string5(){
//     string input="aaabc xyz pop bbc";
//     int current_series=1; //current series len
//     int old_series=1; //Previuos series len
//     int word_cur_pos=0;
//     int word_cur_len=1;
//     int word_old_pos=0;
//     int word_old_len=1;
//     for (int i=0; i<input.size();i++){
//         if((input[i]!=' ' || input[i]!=',' || input[i]!='.')&&input[i]!=0){
//             if(input[i-1]==input[i]) current_series++;
//             else if(input[i-1]!=input[i]){
//                 if(current_series>old_series){
//                     old_series=current_series;
//                     current_series=0;
//                 }
//             }
//             word_cur_len++;
//         }
//         else{
//             word_cur_len=i-word_cur_len;
//             word_old_len=word_cur_len;
//             word_old_pos=word_cur_pos;
//         }
//     }
// }
void char1(){
    char S[]="Meanwhilewhile at the Batcave...";
    char X[]="while";
    char *out=strstr(S,X);
    if(out){
        strcpy(out,out+strlen(X));
        cout<<S<<endl;
    }
    else cout<<"Error"<<endl;
}
void char2(){
    char input[]="These are not the droids you are looking f, Fredy";
    cout<<input<<endl;
    char target[]="f";
    char end[100]="or";
    char *p=strstr(input,target)+strlen(target);
    if(strlen(input)+strlen(end)<100){
        strcat(end,p);
        strcpy(p,end);
    }
    cout<<input<<endl;
}
void char3(){
    char S[40]="We are fine.re you.?";
    cout<<S<<endl;
    char X[60]=" How angular js can be difficult to learn?";
    cout<<X<<endl;
    char *p=strstr(S, ".")+1;
    cout<<*p<<"\t"<<p<<endl;
    char buffer[20]="\0";
    strcpy(buffer, p);
    strncpy(p, X, 6);
    p+=6;
    strcpy(p, buffer);
    cout<<S<<endl;
}
void char4(){
    char input[]="Buying, using, breaking, fixing, trashing, mailing, check - upgrading, charging, pointing, zooming, pressing, snapping, working, quick - erasing...";
    cout<<input<<endl;
    int count=0;
    for(int i=0; i<strlen(input)-2; i++){
        if(input[i]=='i'){
            if(input[i+1]=='n'){
                if(input[i+2]=='g'){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    home:
    cout<<"Welcome to \"String01\", type \"string\" or \"char\" to use \"string\" class or \"char\" array respectedly: "<<endl;
    string method;
    error1:
    cin>>method;
    if(method=="string"){
        cout<<"String/Choose the task: ";
        int choice;
        cin>>choice;
        switch (choice) {
            case 1:string1();break;
            case 2:string2();break;
            case 3:string3();break;
            case 4:string4();break;
//            case 5:string5();break;
        }
    }
    else if(method=="char"){
        int task;
        cout<<"Char/Choose the task: ";
        cin>>task;
        switch(task){
            case 1:char1();break;
            case 2:char2();break;
            case 3:char3();break;
            case 4:char4();break;
            case 5:break;
        }
    }
    else{
        cout<<"Error! Try again! Check your spelling!"<<endl;
        goto error1;
    }
    string exit;
    cin>>exit;
    if(exit=="home") goto home;
    return 0;
}

