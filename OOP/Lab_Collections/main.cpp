#include <iostream>
#include <fstream>
#include <list>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

static long long pos = 0;
static long long prev_pos = 0;
static long long next_pos = 0;
static int lines = 0;
static int cur_line = 0;

class Book {
private:
    string Name;
    string Author;
    string Publisher;
    int releaseYear;
    int pages;

public:
    Book(){
        Name = "Alphabet";
        Author = "Johny";
        Publisher = "Times";
        releaseYear=1850;
        pages=354;
    }

    Book (const Book & obj) {
        Name = obj.Name;
        Author = obj.Author;
        Publisher = obj.Publisher;
        releaseYear=obj.releaseYear;
        pages=obj.pages;
    }

    string getName(){
        return Name;
    }
    string getAuthor(){
        return Author;
    }
    string getPublisher() {
        return Publisher;
    }
    int getReleaseYear() {
        return releaseYear;
    }
    
    int getPages() {
        return pages;
    }

    Book & operator= (const Book &obj){
        Name = obj.Name;
        Author = obj.Author;
        Publisher = obj.Publisher;
        releaseYear=obj.releaseYear;
        pages=obj.pages;
        return *this;
    }
    
    Book& operator= (const int & a){
        releaseYear=a;
        return *this;
    }

    bool operator== (Book obj) const {
        return releaseYear==obj.releaseYear;
    }

    bool operator< (Book obj) const {
        return releaseYear<obj.releaseYear;
    }


    friend int operator+(int &a, Book &obj);
    friend ostream& operator<<(ostream& os, const Book& book);
    friend istream& operator>>(istream& is, Book& book);
    friend ifstream& operator>>(ifstream& is, Book& book);
};


int operator+(int &a, Book &obj) {
    int temp;
    temp = a + obj.getReleaseYear();
    return temp;
}


void for_each_function(Book b){
    if(b.getReleaseYear()<1939) cout<<b;
}

void isOdd(Book b){
  if(b.getReleaseYear()%2!=0){
      b=1000+(rand()%1017);
  }
  cout<<b;
}

ostream& operator<< (ostream& os, const Book& book) {
    os<<book.Name<<", "<<book.Author<<", "<<book.Publisher<<", "<<book.releaseYear<<", "<<book.pages<<endl;
    return os;
}

istream& operator>>(istream& is, Book& book){
    is>>book.Name>>book.Author>>book.Publisher>>book.releaseYear>>book.pages;
    return is;
}

ifstream& operator>> (ifstream& is, Book& book){
    // ifstream f ("C:/Users/user/Documents/GitHub/Homework/OOP/Lab_Collections/library.csv");
    if (!is) throw 0;
    if (cur_line >= lines) {
        is.close();
        throw 0.1;
    }

    string temp, temp1;
    is.seekg(pos);
    prev_pos = pos;
    if (cur_line == lines-1) {
        getline(is,  temp1);
        next_pos = is.end;
    }
    else {
        getline(is, temp1, '\n');
        next_pos = is.tellg();
    }
    pos = prev_pos;
    is.seekg(pos);

    getline (is, temp, ',');
    book.Name = temp;

    getline (is, temp, ',' );
    book.Author = temp;
    for(string::iterator it=book.Author.begin();it!=book.Author.end();++it){
      if(isdigit(*it)){
        throw (short int) 1;
      }
    }

    getline (is, temp, ',' );
    book.Publisher = temp;

    getline (is, temp, ',' );
    for(string::iterator it=temp.begin();it!=temp.end();++it){
        if(isalpha(*it)){
            throw (short int) 1;
        }
    }
    book.releaseYear = atoi(temp.c_str());

    getline (is, temp, '\n');
    book.pages = atoi(temp.c_str());

    pos = is.tellg();
    cur_line++;
    is.close();

    if (book.releaseYear < 1000 || book.pages < 0) throw 'a';
    return is;
}

void static getLinesQuantity() {
    string line;
    ifstream f ("C:/Users/user/Documents/GitHub/Homework/OOP/Lab_Collections/library.csv");
    int i = 0;
    if (!f) throw 0;
    while (!f.eof()) {
        getline(f, line, '\n');
        i++;
    }
    lines = i;
    f.close();
}


int main() {
    getLinesQuantity();
    set <Book> Library;
    list <string> lerrors_log;
    list <string> ferrors_log;
    ifstream file ("C:/Users/user/Documents/GitHub/Homework/OOP/Lab_Collections/library.csv");
    Book input;
    for (int i=0;i<lines;++i){
        try {
            file>>input;
            file.ignore();
            file.clear();
        }
        catch (int a){
            cout<<"Unable to load file!"<<endl;
            exit(0);
        }
        catch (double b){
            cout<<"File is read"<<endl;
            break;
        }
        catch (char c) {
            lerrors_log.push_back(input.getName());
            continue;
        }
        catch (...) {
            ferrors_log.push_back(input.getName()+" "+input.getAuthor());
            pos=next_pos;
            cur_line++;
            continue;
        }
        Library.insert(input);
    }

    set <Book> LibraryMod=Library;

    cout << "Library contains: "<<endl;
    for(set<Book>::iterator it=Library.begin(); it!=Library.end();++it){
        cout<<*it;
    }


    cout<<endl<<"Logical errors are in next books: "<<endl;
    for(list<string>::iterator it=lerrors_log.begin(); it!=lerrors_log.end();++it){
        cout<<*it<<endl;
    }

    cout<<endl<<"Fatal errors fond in next lines: "<<endl;
    for(list<string>::iterator it=ferrors_log.begin(); it!=ferrors_log.end();++it){
        cout<<*it<<endl;
    }

    cout<<endl<<"Reverse order list: "<<endl;
    for (set<Book>::const_reverse_iterator r_it = Library.rbegin(); r_it != Library.rend(); ++r_it) {
        cout << *r_it;
    }

    cout<<endl<<"Books published before WWII: (using non-mod \"for_each\")"<<endl;
    for_each(Library.begin(), Library.end(), for_each_function);

    cout<<endl<<"Books published in even years get new values: (using \"for_each\")"<<endl;
    for_each(LibraryMod.begin(), LibraryMod.end(), isOdd);

    return 0;
}
