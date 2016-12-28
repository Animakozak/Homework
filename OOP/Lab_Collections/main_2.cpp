#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include <set>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

static long long pos = 0;
static long long prev_pos = 0;
static long long next_pos = 0;
static int lines = 0;
static int cur_line = 0;

class Book{
private:
    char * Name;
    char * Author;
    char * Publisher;
    int releaseYear;
    int pages;
public:
    Book();
    Book(const Book &obj);
    char * getName();
    std::string getStringName();
    char * getAuthor();
    std::string getStringAuthor();
    char * getPublisher();
    std::string getStringPublisher();
    int getReleaseYear();
    int getPages();
    Book &operator=(const Book &obj);
    bool operator==(Book obj) const;
    bool operator<(Book obj) const;
    bool operator>(Book obj) const;
    friend int operator+(int &a, Book &obj);
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
    friend std::istream& operator>>(std::istream& is, Book& book);
    friend std::ifstream& operator>>(std::ifstream& is, Book& book);
    ~Book();
};

#include "Book.h"

Book::Book(){
    Name = new char[50];
    Author = new char[50];
    Publisher = new char[50];
    strcpy(Name,"Alphabet");
    strcpy(Author,"Johny");
    strcpy(Publisher,"Times");
    releaseYear=1850;
    pages=354;
}

Book::Book(const Book &obj) {
    Name = new char[sizeof(obj.Name)];
    strcpy(Name,obj.Name);
    Author = new char[sizeof(obj.Author)];
    strcpy(Author, obj.Author);
    Publisher = new char[sizeof(obj.Publisher)];
    strcpy(Publisher, obj.Publisher);
    releaseYear=obj.releaseYear;
    pages=obj.pages;
}
char * Book::getName(){
    return Name;
}
std::string Book::getStringName(){
    std::string temp;
    temp=Name;
    return temp;
}
char * Book::getAuthor() {
    return Author;
}
std::string Book::getStringAuthor(){
    std::string temp;
    temp=Author;
    return Publisher;
}
char * Book::getPublisher() {
    return Publisher;
}
std::string Book::getStringPublisher(){
    std::string temp;
    temp=Publisher;
    return temp;
}
int Book::getReleaseYear() {
    return releaseYear;
}
int Book::getPages() {
    return pages;
}
void for_each_function(Book b){
    if(b.getReleaseYear()<1941) std::cout<<b.getReleaseYear()<<std::endl;
}

Book &Book::operator=(const Book &obj) {
    delete[] Name;
    Name = new char[sizeof(obj.Name)];
    strcpy(Name, obj.Name);
    delete[] Author;
    Author=new char[sizeof(obj.Author)];
    strcpy(Author, obj.Author);
    delete[] Publisher;
    Publisher = new char[sizeof(obj.Publisher)];
    strcpy(Publisher, obj.Publisher);
    releaseYear=obj.releaseYear;
    pages=obj.pages;
    return *this;
}

bool Book::operator==(Book obj) const {
    return releaseYear==obj.releaseYear;
}

bool Book::operator<(Book obj) const{
    return releaseYear<obj.releaseYear;
}

bool Book::operator>(Book obj) const{
    return releaseYear<obj.releaseYear;
}

int operator+(int &a, Book &obj) {
    int temp;
    temp = a + obj.getReleaseYear();
    return temp;
}

Book::~Book(){
    delete[] Name;
    delete[] Author;
    delete[] Publisher;
}
std::ostream& operator<<(std::ostream& os, const Book& book) {
    os<<book.Name<<" "<<book.Author<<" "<<book.Publisher<<" "<<book.releaseYear<<" "<<book.pages<<std::endl;
    return os;
}
std::istream& operator>>(std::istream& is, Book& book){
    is>>book.Name>>book.Author>>book.Publisher>>book.releaseYear>>book.pages;
    return is;
}
std::ifstream& operator>>(std::ifstream& is, Book& book){
    std::ifstream f ("d:/dataBaseThree.csv");
    if (!f) throw 0;
    if (cur_line >= lines) {
        f.close();
        throw 0.1;
    }
    std::string temp, temp1;
    f.seekg(pos);
    prev_pos = pos;
    if (cur_line == lines-1) {
        std::getline(f, temp1);
        next_pos = f.end;
    }
    else {
        std::getline(f, temp1, '\n');
        next_pos = f.tellg();
    }
    pos = prev_pos;
    f.seekg(pos);
    
    std::getline (f, temp, ',');
    std::cout<<"Name: "<<temp<<std::endl;
    delete[] book.Name;
    book.Name = new char[temp.size()+1];
    copy(temp.begin(), temp.end(), book.Name);
    book.Name[temp.size()] = '\0';
    
    std::getline (f, temp, ',' );
    delete[] book.Author;
    book.Author = new char[temp.size()+1];
    copy(temp.begin(), temp.end(), book.Author);
    book.Author[temp.size()] = '\0';
    
    std::getline (f, temp, ',' );
    delete[] book.Publisher;
    book.Publisher = new char[temp.size()+1];
    copy(temp.begin(), temp.end(), book.Publisher);
    book.Publisher[temp.size()] = '\0';
    
    std::getline (f, temp, ',' );
    book.releaseYear = std::atoi(temp.c_str());
    
    std::getline (f, temp, '\n');
    book.pages = std::atoi(temp.c_str());
    std::cout<<next_pos<<std::endl;                //
    pos = f.tellg();
    cur_line++;
    f.close();
    if (book.releaseYear < 1000 || book.pages < 0) throw 'a';
    return is;
}

void static getLinesQuantity() {
    std::string line;
    std::ifstream f ("d:/dataBaseThree.csv");
    int i = 0;
    if (!f) throw 0;
    while (!f.eof()) {
        getline(f, line, '\n');
        i++;
    }
    lines = i;
    f.close();
}
using namespace std;

int main() {
    ifstream file ("d:/dataBaseThree.csv");
    set<Book> Library;
    set<Book>::iterator it_book=Library.begin();
    getLinesQuantity(); //pre-loading of a file to calculate number of lines
    list <int> ferrors_log;
    list <int> lerrors_log;
    Book input;
    for (int i=0;i<lines;++i){
        it_book=Library.end();
        try{
            file>>input;
        }
        catch (int e){
            cout<<"Unable to load file!"<<endl;
            exit(0);
        }
        catch (double e){
            cout<<"File is read"<<endl;
            break;
        }
        catch (char e){
            lerrors_log.push_back(cur_line);
            continue;
        }
        catch (...){
            ferrors_log.push_back(cur_line);
            pos=next_pos;
            cur_line++;
            continue;
        }
        Library.insert(it_book,input);
    }
    file.close();

    cout<<"Library contains: "<<endl;
    for(set<Book>::iterator it=Library.begin(); it!=Library.end();++it){
        cout<<*it;
    }
    cout<<endl<<"Logical errors are in next lines: "<<endl;
    for(list<int>::iterator it=lerrors_log.begin(); it!=lerrors_log.end();++it){
        cout<<*it<<endl;
    }
    cout<<endl<<"Fatal errors fond in next lines: "<<endl;
    for(list<int>::iterator it=ferrors_log.begin(); it!=ferrors_log.end();++it){
        cout<<*it<<endl;
    }
    cout<<"Reverse order list: "<<endl;
    for (set<Book>::const_reverse_iterator r_it = Library.rbegin(); r_it != Library.rend(); ++r_it) {
        cout << *r_it;
    }
    return 0;
}