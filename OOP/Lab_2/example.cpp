#include <iostream>
using namespace std;

class Power {
public:
    
    double first;
    double second;
    
    Power() {
        first = 0;
        second = 0;
    }
    
    Power(int x, int y) {
        first = x;
        second = y;
    }
    
    void view() {
        cout << "First = " << first << endl << "Second = " << second << endl;
    }
    
    void ask() {
        cout << "Введите first: ";
        cin >> first;
        cout << "Введите second: ";
        cin >> second;
    }
    
    Power operator* (Power p) { // для умножения типов 'Power'
        Power temp;
        temp.first = first * p.first;
        temp.second = second * p.second;
        return temp;
    }
    Power operator* (double p) { // для умножения типа 'Power' на тип 'int'
        Power temp;
        temp.first = first * p;
        temp.second = second * p;
        return temp;
    }
    
    Power operator- () { // унарный минус
        Power temp;
        temp.first = -first;
        temp.second = -second;
        return temp;
    }
    
    Power operator=(Power p) { // оператор присваивания
        first = p.first;
        second = p.second;
        return p;
    }
    
};


int main(int argc, const char * argv[]) {
    int user_choice;
    cout << "Нажмите '1', чтобы ввести пару чисел" << endl;
    cout << "Нажмите '2', чтобы ввести числа в массив классов" << endl;
    cin >> user_choice;
    
    if (user_choice == 1) {
        Power a;
        a.ask();
        a.view();
        Power p = a;
        Power k = a;
        if (p.second < 0) {
            p.first = 1/p.first;
            k = -a;
            a.first = 1/a.first;
        }
        for (int i = 1, n = k.second; i < n; i++) {
            p = p * a;
        }
        cout << "Результат: " << p.first << endl;
    }
    
    else if (user_choice == 2) {
        int const N = 3;
        Power array[N];
        for (int i = 0; i < N; i++) {
            array[i].ask();
            array[i].view();
            Power p = array[i];
            Power k = array[i];
            if (p.second < 0) {
                p.first = 1/p.first;
                k = -array[i];
                array[i].first = 1/array[i].first;
            }
            for (int j = 1, n = k.second; j < n; j++) {
                p = p * array[i];
            }
            cout << "Результат: " << p.first << endl << endl;
        }
    }
    
    else {
        cout << "Неверный ввод!" << endl;
    }
    
    return 0;
}
