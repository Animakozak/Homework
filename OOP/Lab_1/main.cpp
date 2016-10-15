#include "lab_1.h"
int main(){
  lab_1 obj1;
  lab_1 obj2;
  lab_1 obj3;
  lab_1 obj4;
  //--Basic io example--
  cout<<"Testing obj1: "<<endl;
  obj1.setValue();
  obj1.getValue();
  //--sqr method example--
  cout<<"Testing obj2: "<<endl;
  obj2.setValue();
  cout<<"Before:"<<endl;
  obj2.getValue();
  obj2.sqr();
  cout<<"After:"<<endl;
  obj2.getValue();
  //--Array--
  cout<<"lab_1 array: "<<endl;
  array <lab_1, 2> objArray;
  for(int i=0;i<2;i++){
      objArray[i].setValue();
      objArray[i].getValue();
  }
<<<<<<< HEAD
  //--Composition|Assignment|Negative Value-- 
=======
  //--Composition|Assignment|Negative Value--
>>>>>>> da7f04177b9b647ed226dbd8e3599dc17a8a58e9
  cout<<"Array composition as obj3: "<<endl;
  obj3=objArray[0]*objArray[1];
  obj3.getValue();
  cout<<"obj4 as obj3 negative: "<<endl;
  obj4=-obj3;
  obj4.getValue();
  return 0;
}
