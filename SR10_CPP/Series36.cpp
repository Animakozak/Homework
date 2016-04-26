#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream f ("d://series36.txt");
    int x, a;
    int s = 0;
    int q = 0;
    while ( !f.eof() ) {
        f>>x;
        a = x;
        while (x != 0) {
            f>>x;
            if (x != 0 && x > a) s = 1;
        }
        if (s == 0) q = q + 1;
        s = 0;
    }
    f.close();
    cout<<"Kilkist: "<<q<<endl;
    return 0;
}