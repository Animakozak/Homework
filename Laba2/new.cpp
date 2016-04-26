#include <iomanip>
#include <iostream>
#include <cmath>
#define eps 0.0001
using namespace std;

double iterative (double x) {
    double s = 0, a = x, b = 1;
    int i = 1;
    while (fabs(a/b) > eps) {
        s=s+a/b;
        a=a*x;
        b=b+1;
        i++;
    }
    return -s;
}

double recursion (double x, double a, double b) {
    if (fabs(a/b) > eps) {
        return (a/b + recursion(x, a*x, b+1));
    }
    else return 0;
}

double fx (double x) {
    return log (1-x);
}

void tabl(double a, double b, int n, double(*iter)(double), double(*rec)(double, double, double), double(*fx)(double)) {
    double x = a;
    double dx;
    dx = (b - a) / (n - 1.0);
    cout << endl << endl << "X" << "\t\t\t" << left << setw(8) << "Znachenya iteratyvnoyi funkcii" << "\t" << left << setw(8) << "Bibliotechna funkciya" << "\t" << left << setw(8) << "znachennya rekursivnoi funkcii" << endl << endl;
    while (x <= b) {
        cout << x << "\t\t\t" << left << setw(8) <<  (*iter)(x)<< "\t\t\t" << left << setw(8) << (*fx)(x) << "\t\t\t" << left << setw(8) << -(*rec)(x,x,1)<< endl;
        x += dx;
    }
}

int main() {
    double a, b, n;
    cout << "Vvedit granicy:" << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (a < b && a >= -1 && b < 1) {
        cout << "Vvedit kilkist intervaliv:" << endl << "n = ";
        cin >> n;
        if (n > 0) {
            tabl(a, b, n, iterative, recursion, fx);
        }
        else cout << "Nevirna kilkist intervaliv!" << endl;
    }
    else cout << "Nevirno vvdedeni granyci! (a < b)" << endl;
    return 0;
}