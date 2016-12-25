#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

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
    char * getAuthor();
    char * getPublisher();
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
static long long pos = 0;
static long long prev_pos = 0;
static long long next_pos = 0;
static int lines = 0;
static int cur_line = 0;
void getLinesQuantity() {
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

