#include <iostream>
#include <array>
using namespace std;
class lab_1 {
private:
  int first;
  int second;
public:
  lab_1(){                                          //Constructor
      first= 0;
      second = 0;
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
  void sqr(){
    first=first*first-(second*second);
    second=first*second*2;
  }
};