//
//  main.cpp
//  mkr
//
//  Created by Anton Astakhov on 12/2/16.
//  Copyright © 2016 Anton Astakhov. All rights reserved.
//

#include <iostream>
#include <cstring>
#include "stdlib.h"
//using namespace std;


//  TASK 1 - сделано
// Оператор = перегружать не нужно. Присваивание происходит за счет конструктора копирования
//class stack {
//    int * s;
//    int top;
//    int size;
//    
//public:
//    stack (int max = 10) {
//        top = -1;
//        size = max;
//        s = new int [max];
//        for (int i = 0; i < size; i++) {
//            s[i] = -10 + rand() % 20;
//        }
//    }
//    
//    stack (const stack & obj) {
//        size = obj.size;
//        s = new int[size];
//        for (int i = 0; i < size; i++) {
//            s[i] = obj.s[i];
//        }
//    }
//    
//    void view() {
//        for (int i = 0; i < size; i++) {
//            cout << s[i] << " ";
//        }
//        cout << endl;
//    }
//    
//    stack operator!() {
//        for (int i = 0; i < size; i++) {
//            s[i] = -s[i];
//        }
//        return *this;
//    }
//    
////    Дружественная функция работает, просто нужно использовать либо её, либо внутреннюю функцию класса
//    
////    friend stack operator!(stack &b){
////        for (int i = 0; i < b.size; i++) {
////            b.s[i] = -b.s[i];
////        }
////        return b;
////    }
//    
//    ~stack() {
//        delete [] s;
//    }
//};
//
//int main(int argc, const char * argv[]) {
//    stack a(10);
//    cout << "Before: ";
//    a.view();
//    !a;
//    cout << "After:  ";
//    a.view();
//    return 0;
//}





// TASK 2 - сделано
// БЕЗ using namespace std; !!!

//class tiger{
//    std::string tigerName;
//    std::string tigerColor;
//    float tigerWeight;
//public:
//    static int count;
//    tiger(){
//        tigerName="Noname";
//        tigerColor="No Color";
//        tigerWeight=0;
//        count++;
//    };
//    tiger(std::string name){
//        tigerName=name;
//        tigerColor="No Color";
//        tigerWeight=0;
//        count++;
//    };
//    std::string getTigerName(){
//        return tigerName;
//    }
//    std::string getTigerColor(){
//        return tigerColor;
//    }
//    float getTigerWeight(){
//        return tigerWeight;
//    }
//    tiger &setname(std::string name){
//        tigerName=name;
//        return *this;
//    }
//    tiger &setcolor(std::string color){
//        tigerColor=color;
//        return *this;
//    }
//    tiger &setweight(float weight){
//        tigerWeight=weight;
//        return *this;
//    }
//    // friend ostream & operator << (ostream &os, tiger const &);
//    void print(){
//        std::cout<<"Name: "<<getTigerName()<<std::endl<<"Color: "<<getTigerColor()<<std::endl<<"Weight: "<<getTigerWeight()<<std::endl;
//    }
//};
//
//// ostream & operator << (ostream &os, tiger const &person)
//// {
////     return os << "Hello, my name is " << person.m_name << " and I am " << person.m_age << " years old.";
//// }
//
//
//bool less(tiger a, tiger b){
//    return a.getTigerWeight() < b.getTigerWeight();
//}
//int tiger::count=0;
//
//int main () {
//    tiger T1, T2 ("Kuzya");
//    T1.setname("Murzik").setcolor("light").setweight(200);
//    /* задаємо параметри тигра*/
//    T1.print (); /* друк інформації про тигрів */
//    T2.print ();
//    T2.setname ("Tigr");
//    if (less(T2, T1)) T2.print ();
//    /* друк інформації про те тигрі, який за розміром менше */
//    else T1.print ();
//    /* друкуємо кількість об'єктів-тигрів*/
//    std::cout << tiger::count << std::endl;
//    return 0;
//}





// TASK 3 - сделано
//#include <iostream>
//using namespace std;
//class Ball{
//    string color;
//    float d;
//public:
//    Ball(){
//        color="white";
//        d=0;
//    }
//    Ball(float di){
//        color="white";
//        d=di;
//    }
//    Ball(string c, float di){
//        color=c;
//        d=di;
//    }
//    string getColor(){
//        return color;
//    }
//    float getD(){
//        return d;
//    }
//    ~Ball() {
//        cout << color << endl;
//    }
//};
//float smallest(Ball &a, Ball &b, Ball &c){
//    if(a.getD()<=b.getD() && a.getD()<=c.getD()){
//        return a.getD();
//    }
//    else if(b.getD()<=a.getD() && b.getD()<=c.getD()){
//        return b.getD();
//    }
//    else{
//        return c.getD();
//    }
//}
//int main () {
//    Ball gb ("green", 20); // м'яч кольору "green", діаметр - 20
//    Ball wb (12); // м'яч кольору "white", діаметр - 12
//    Ball b (10); // м'яч кольору "white", діаметр - 10
//    cout << "The smallest:" << smallest (gb, wb, b) << "end" << endl; // повинен бути надрукований діаметр найменшого з м'ячів
//    return 0;
//}
//// // В результаті роботи програми має бути надруковано:
//// The smallest: 10 end
//// white
//// white
//// green





// TASK 4 - сделано

// class Date {
//    int day, month, year;
//    static Date today;
   
// public:
//    static int count;
   
//    Date(){
//        day=0;
//        month=0;
//        year=0;
//        count++;
//    }
   
//    Date(int d, int m, int y){
//        day=d;
//        month=m;
//        year=y;
//        count++;
//    }
   
//    Date(int d, int m){
//        day=d;
//        month=m;
//        year=today.year;
//        count++;
//    }
   
//    Date(const Date & obj){
//        day=obj.day;
//        month=obj.month;
//        year=obj.year;
//        count++;
//    }
   
//    void setToday() {
//        today.day = 5;
//        today.month = 12;
//        today.year = 2016;
//    }
   
//    ~Date(){
//        count--;
//    }
// };

// Date Date::today;
// int Date::count=0;

// int f() {
//    Date d1(1,1,2009),d2(28,2),d3,d4=d1;
//    return d1.count + Date::count;
// }

// int main(int argc, char const *argv[]) {
//    Date a;
//    a.setToday();
//    cout << f() << endl;
//    return 0;
// }





// TASK 5 - сделано

//class my_vector {
//    int len; // кількість елементів у векторі
//    int * v; // покажчик на масив елементів вектора
//    
//public:
//    my_vector(){
//        len = 10;
//        v = new int[len];
//        for (int i = 0; i < len; i++) {
//            v[i] = -10 + rand() % 20;
//        }
//    }
//    
//    my_vector(int l) {
//        len = l;
//        v = new int[len];
//        for (int i = 0; i < len; i++) {
//            v[i] = -10 + rand() % 20;
//        }
//    }
//    
//    my_vector (const my_vector & obj) {
//        len = obj.len;
//        v = new int[len];
//        for (int i = 0; i < len; i++) {
//            v[i] = obj.v[i];
//        }
//    }
//    
//    my_vector & operator=(const my_vector & obj) {
//        if (this != &obj) {
//            delete[] v;
//            len = obj.len;
//            v = new int[len];
//            for (int i = 0; i < len; i++) {
//                v[i] = obj.v[i];
//            }
//        }
//        return *this;
//    }
//    
//    my_vector sum (my_vector &v1, my_vector &v2) {
//        my_vector temp = v1;
//        for (int i = 0; i < temp.len; i++) {
//            temp.v[i] = v1.v[i] + v2.v[i];
//        }
//        return temp;
//    }
//    
//    my_vector next() {
//        for (int i = 0; i < len; i++) {
//            v[i]++;
//        }
//        return *this;
//    }
//    
//    void view() {
//        for (int i = 0; i < len; i++) {
//            cout << v[i] << " ";
//        }
//        cout << endl;
//    }
//    
//    ~my_vector() {
//        delete [] v;
//    }
//};
//
//int main() {
//    my_vector v, v1, v2;
//    v1.view();
//    cout << "+" << endl;
//    v2.view();
//    v = v.sum(v1, v2);
//    cout << "=" << endl;
//    v.view();
//    cout << endl;
//    
//    v.next();
//    v.view();
//    
//    v.next().next(); // координаты вектора увеличатся на 2
//    v.view();
//}





// TASK 6 - сделано

//class my_vector {
//    int len; // кількість елементів у векторі
//    int * v; // покажчик на масив елементів вектора
//public:
//    my_vector(int length){
//        len=length;
//        v=new int[len];
//        for(int i=0;i<len;i++){
//            v[i]=-10 + rand() % 20;
//        }
//    }
//    my_vector(const my_vector & obj){
//        len = obj.len;
//        v = new int [len];
//        for (int i; i<len; i++){
//            v[i]=obj.v[i];
//        }
//    }
//    
//    my_vector & operator=(const my_vector & obj) {
//        if (this != &obj) {
//            delete[] v;
//            len = obj.len;
//            v = new int[len];
//            for (int i = 0; i < len; i++) {
//                v[i] = obj.v[i];
//            }
//        }
//        return *this;
//    }
//    
//    ~my_vector(){
//        delete [] v;
//    }
//    double multiply(my_vector two){
//        double multi = 0;
//        if(len==two.len){
//            for(int i=0; i<len; i++){
//                multi+=v[i]*two.v[i];
//            }
//        }
//        else std::cout<<"vectors have different lenghts"<<std::endl;
//        return multi;
//    }
//};
//int main(){
//    my_vector lala(5);
//    my_vector lolo(5);
//    lolo=lala;
//    std::cout<<lolo.multiply(lala)<<std::endl;
//}





// TASK 7 - сделано

//class fraction {
//    int a, b;
//    
//public:
//    fraction(int ia) {
//        a = ia;
//        b = 1;
//    }
//    fraction(int ia, int ib) {
//        a = ia;
//        b = ib;
//        while (ia != 0 && ib != 0) { // алгоритм Евклида
//            if (ia > ib) ia = ia % ib;
//            else ib = ib % ia;
//        }
//        a = a / (ia+ib);
//        b = b / (ia+ib);
//        cout << a << "/" << b << endl;
//    }
//    
////    явно определенный конструктор копирования
//    fraction (const fraction & obj) {
//        a = obj.a;
//        b = obj.b;
//    }
//};
//
//int main() {
//    fraction c(5, 10);
//    fraction d(6,12);
//    return 0;
//}


/* 8 */

// using namespace std;

// class Main {
    
// private:
//     int a, b;
//     Main (int ia, int ib) {
//         a = ia;
//         b = ib;
//     }
// public:
//     static Main createTest() {
//         return *new Main(0,0);
//     }
//     static Main createTest(int ia) {
//         return *new Main(ia,0);
//     }
//     static Main createTest(int ia, int ib) {
//         return *new Main(ia,ib);
//     } 
// };

// int main() {
//     Main::createTest();
//     Main::createTest(1);
//     Main::createTest(1,2);
// }


// TASK 9 - сделано

// перегружаются только в классе  =  ()  []  ->  ->*
// перегружаются только вне класса  <<  >>
// перегружаются в классе и вне класса  +  -
// не перегружаются  .  .*  sizeof  ::  ?:

//class Door {
//    int height;
//    int width;
//public:
//    Door() {
//        height = 0;
//        width = 0;
//    }
//    
//    Door(int h, int w) {
//        height = h;
//        width = w;
//    }
//    
//    Door & operator=(const Door & obj); // перегружается только в классе
//    
//    Door operator+(Door t2);                 // перегружается в классе
//    friend Door operator+(Door t1, Door t2); // перегружается вне класса
//};
//
//std::ostream & operator << (std::ostream &out, const char* a); // перегружается только вне класса
//
//int main() {
//    return 0;
//}





// TASK 10 - сделано

/*
T constr
B constr
T constr
B copy
130and-1
130and-1
0and0
B destr
T destr
end
B destr
T destr
*/

/* 11 */
// using namespace std;
// class Animal {
//     char name [20];
// public:
//     Animal(){
//     strcpy(name,"A");
//     };
//     virtual void print () const =0;
// };
// class Elephant: public Animal {
//     int weight; // вагу
//     int trunc_len; // довжина хобота
// public:
//     Elephant(){
//         weight=0;
//         trunc_len=0;
//     }
//     void print () const {cout << "Elephant" << endl;}
    
// };

// int main () {
//     const Elephant s;
//     const Animal * a = & s;
//     a-> print ();
//     return 0;
// }




// TASK 12
// set_luck(double d), set_luck(), is_hungry(), set_luck(int l), is_lucky();
// с protected нельзя set_luck(l), is_lucky()

// TASK 13 - 4)

// TASK 14 - 4)

// TASK 15 - 2)



// "ПРОСТОЕ" ЗАДАНИЕ

//class Figure {
//public:
//    virtual double area() const = 0;
//    virtual double perimeter() const = 0;
//    void GetInfo() {
//        cout << "площадь: " << area() << endl;
//        cout << "периметр: " << perimeter() << endl << endl;
//    }
//    virtual ~Figure() {}
//};
//
//class Rectangle : public Figure {
//private:
//    double a, b;
//public:
//    Rectangle(double ia = 0, double ib = 0): a(ia), b(ib) {}
//    virtual double area() const {
//        return a * b;
//    }
//    virtual double perimeter() const {
//        return 2 * (a + b);
//    }
//};
//
//class Circle : public Figure {
//private:
//    double r;
//public:
//    Circle(double ir = 0): r(ir) { }
//    virtual double area() const {
//        return 3.14159265358 * r * r;
//    }
//    virtual double perimeter() const {
//        return 2 * 3.14159265358 * r;
//    }
//};
//
//class Trapezium : public Figure {
//private:
//    double a, b, c, d, h;
//public:
//    Trapezium(double ia = 0, double ib = 0, double ic = 0, double id = 0, double ih = 0): a(ia), b(ib), c(ic), d(id), h(ih) { }
//    virtual double area() const {
//        return (a + b) * h / 2;
//    }
//    virtual double perimeter() const {
//        return a + b + c + d;
//    }
//};
//
//
//int main(int argc, const char * argv[]) {
//    Figure *a[3];
//    
//    a[0] = new Rectangle(2, 2);
//    a[1] = new Circle(3);
//    a[2] = new Trapezium(5, 3, 5, 9, 4);
//    
//    cout << "Прямоугольник" << endl;
//    a[0]->GetInfo();
//    cout << "Круг" << endl;
//    a[1]->GetInfo();
//    cout << "Трапеция" << endl;
//    a[2]->GetInfo();
//    
//    for (int i = 0; i < 3; i++) {
//        delete a[i];
//    }
//    
//    return 0;
//}


