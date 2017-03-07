#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

//class Test{   //2 11
//public:
//    Test():x(0),y(0),z(0){};
//    Test(int a, int b):z(y+1),y(2*x+b),x(a){cout<<x<<y<<z;};
//private:
//    int x;
//    int y;
//    int z;
//};
//int main(){
//    Test a(2,3);
//    return 0;
//}
int main() {    //3 21
    list<int> coll;
    for (int i=1; i<=9; ++i) coll.push_back(i);
    list<int>::reverse_iterator rpos(find(coll.begin(),coll.end(),5));
    cout<<*rpos<<" ";
    list<int>::iterator pos(rpos.base());
    cout<<*pos<<" ";
    list<int>::iterator rrpos(pos);
    cout<<*rrpos;
    return 0;
}
//int main(){           //1 21
//    list<int> coll;
//    for (int i=1; i<=9; ++i) coll.push_back(i);
//    list<int>::iterator pos(find(coll.begin(),coll.end(),5));
//    cout<<*pos<<" ";
//    list<int>::reverse_iterator rpos(pos);
//    cout<<*rpos<<" ";
//    list<int>::iterator rrpos(rpos.base());
//    cout<<*rrpos;
//    return 0;
//}