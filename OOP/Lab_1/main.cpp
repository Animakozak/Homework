#include "lab_1.h"
int main(){
  lab_1 obj1;
  lab_1 obj2;
  obj1.setValue();
  obj1.getValue();
  obj2.setValue();
  cout<<"Before:"<<endl;
  obj2.getValue();
  obj2.sqr();
  cout<<"After:"<<endl;
  obj2.getValue();
  array <lab_1, 2> objArray={obj1, obj2};
  objArray[1].getValue();
  objArray[1].setValue();
  objArray[1].getValue();
  return 0;
}
