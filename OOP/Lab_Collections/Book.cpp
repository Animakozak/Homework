//#include "Book.h"
//
//Book::Book(){
//    Name = new char[50];
//    Author = new char[50];
//    Publisher = new char[50];
//    strcpy(Name,"Alphabet");
//    strcpy(Author,"Johny");
//    strcpy(Publisher,"Times");
//    releaseYear=1850;
//    pages=354;
//}
//
//Book::Book(const Book &obj) {
//    Name = new char[sizeof(obj.Name)];
//    strcpy(Name,obj.Name);
//    Author = new char[sizeof(obj.Author)];
//    strcpy(Author, obj.Author);
//    Publisher = new char[sizeof(obj.Publisher)];
//    strcpy(Publisher, obj.Publisher);
//    releaseYear=obj.releaseYear;
//    pages=obj.pages;
//}
//char * Book::getName(){
//    return Name;
//}
//char * Book::getAuthor() {
//    return Author;
//}
//char * Book::getPublisher() {
//    return Publisher;
//}
//int Book::getReleaseYear() {
//    return releaseYear;
//}
//int Book::getPages() {
//    return pages;
//}
//
//Book &Book::operator=(const Book &obj) {
//    delete[] Name;
//    Name = new char[sizeof(obj.Name)];
//    strcpy(Name, obj.Name);
//    delete[] Author;
//    Author=new char[sizeof(obj.Author)];
//    strcpy(Author, obj.Author);
//    delete[] Publisher;
//    Publisher = new char[sizeof(obj.Publisher)];
//    strcpy(Publisher, obj.Publisher);
//    releaseYear=obj.releaseYear;
//    pages=obj.pages;
//    return *this;
//}
//
//bool Book::operator==(Book obj) const {
//    return releaseYear==obj.releaseYear;
//}
//
//bool Book::operator<(Book obj) const{
//    return releaseYear<obj.releaseYear;
//}
//
//bool Book::operator>(Book obj) const{
//    return releaseYear<obj.releaseYear;
//}
//
//int operator+(int &a, Book &obj) {
//    return 0;
//}
//
//Book::~Book(){
//    delete[] Name;
//    delete[] Author;
//    delete[] Publisher;
//}
//std::ostream& operator<<(std::ostream& os, const Book &book) {
//    os<<book.Name<<" "<<book.Author<<" "<<book.Publisher<<" "<<book.releaseYear<<" "<<book.pages<<std::endl;
//    return os;
//}
//std::istream& operator>>(std::istream& is, Book &book){
//    is>>book.Name>>book.Author>>book.Publisher>>book.releaseYear>>book.pages;
//    return is;
//}
//std::ifstream& operator>>(std::ifstream& is, Book &book){
//    std::ifstream f ("d:/dataBaseThree.csv");
//    if (!f) throw 0;
//    if (cur_line >= lines) {
//        f.close();
//        throw 0.1;
//    }
//    std::string temp, temp1;
//    f.seekg(pos);
//    prev_pos = pos;
//    if (cur_line == lines-1) {
//        getline(f, temp1);
//        next_pos = f.end;
//    }
//    else {
//        getline(f, temp1, '\n');
//        next_pos = f.tellg();
//    }
//    pos = prev_pos;
//    f.seekg(pos);
//    getline (f, temp, ',' );
//    delete[] book.Name;
//    book.Name = new char[temp.size()+1];
//    copy(temp.begin(), temp.end(), book.Name);
//    book.Name[temp.size()] = '\0';
//    getline (f, temp, ',' );
//    delete[] book.Author;
//    book.Author = new char[temp.size()+1];
//    copy(temp.begin(), temp.end(), book.Author);
//    book.Author[temp.size()] = '\0';
//    getline (f, temp, ',' );
//    delete[] book.Publisher;
//    book.Publisher = new char[temp.size()+1];
//    copy(temp.begin(), temp.end(), book.Publisher);
//    book.Publisher[temp.size()] = '\0';
//    getline (f, temp, ',' );
//    book.releaseYear = std::stoi(temp);
//    getline (f, temp, '\n' );
//    book.pages = std::stoi(temp);
//    pos = f.tellg();
//    cur_line++;
//    f.close();
//    if (book.releaseYear < 1000 || book.pages < 0) throw 'a';
//    return is;
//}
//
