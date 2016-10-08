#include <iostream>
using namespace std;
class lab_1{
  int first;
  int second;
  lab_1(){
    first=0;
    second=0;
  }
  void setValue(){
      cout << "first: ";
      cin >> first;
      cout << "second: ";
      cin >> second;
  }
  void getValue(){
      if (second<-1) cout << first<< "+" << -second << "i" << endl;
      else if (second==-1) cout << first << "+i" << endl;
      else if (second==0) cout << first << endl;
      else if (second==1) cout << first << "-i" << endl;
      else cout << first << "-" << second << "i" << endl;
  }
  lab_1 operator=(lab_1 temp) {
      first = temp.first;
      second = temp.second;
      return temp;
  }
  lab_1 operator*(lab_1 obj){
    lab_1 temp;
    temp.first=obj.first*first-(obj.second*second);
    temp.second=obj.first*second+first*obj.second;
    return temp;
  }
  lab_1 operator- (){
    lab_1 temp;
    temp.first=-first;
    temp.second=-second;
    return temp;
  }
};
