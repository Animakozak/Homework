#include <iostream>


/* 1 */
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
//    ~Ball() {
//        cout << color << endl;
//    }
//    string getColor(){
//        return color;
//    }
//    float getD(){
//        return d;
//    }
//};
//float smallest(Ball a, Ball b, Ball c){
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
/*  В результаті роботи програми має бути надруковано:
 The smallest: 10 end
 white
 white
 green */



/* 2 */
class tiger{
    std::string tigerName;
    std::string tigerColor;
    float tigerWeight;
//    int count=0;
public:
    static int count;
    tiger(){
        tigerName="Noname"+count;
        tigerColor="No Color";
        tigerWeight=0;
        count++;
    };
    tiger(std::string name){
        tigerName=name;
        tigerColor="No Color";
        tigerWeight=0;
        count++;
    };
    std::string getTigerName(){
        return tigerName;
    }
    std::string getTigerColor(){
        return tigerColor;
    }
    float getTigerWeight(){
        return tigerWeight;
    }
    void setname(std::string name){
        tigerName=name;
    }
    void setcolor(std::string color){
        tigerColor=color;
    }
    void setweight(float weight){
        tigerWeight=weight;
    }
    void print(){
        std::cout<<"Name: "<<getTigerName()<<std::endl<<"Color: "<<getTigerColor()<<std::endl<<"Weight: "<<getTigerWeight()<<std::endl;
    }
};

bool less(tiger a, tiger b){
    return a.getTigerWeight() < b.getTigerWeight();
}
int tiger::count=0;

int main () {
    tiger T1, T2 ("Kuzya");
    T1.setname("Murzik");
    T1.setcolor("light");
    T1.setweight(200);
// задаємо параметри тигра
    T1.print (); // друк інформації про тигрів
    T2.print ();
    T2.setname ("Tigr");
    if (less(T2, T1)) T2.print ();
// друк інформації про те тигрі, який за розміром менше
    else T1.print ();
// друкуємо кількість об'єктів-тигрів
    std::cout << tiger::count << std::endl;
    return 0; }
