#include "matrixlib.h"
int main(){
  cout<<"Matrix 2-38"<<endl<<"1 - matrix4.cpp"<<endl<<"2 - matrix9.cpp"<<endl<<"3 - matrix30.cpp"<<endl<<"4 - matrix35.cpp"<<endl<<"5 - matrix36.cpp"<<endl<<"Type file number: ";
  int choice;
  cin>>choice;
  switch (choice) {
    case 1:matrix4();break;
    case 2:matrix9();break;
    case 3:matrix30();break;
    case 4:matrix35();break;
    case 5:matrix36();break;
    case 6:matrix14();break;
    case 7:matrix16();break;
    default:break;
  }
  return 0;
}
