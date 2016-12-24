#include "Book.h"
Book::Book(){
    Name.strcpy("Alphabet");
    Author.strcpy("Johny");
    Publisher.strcpy("Times");
    releaseYear=1850;
    pages=354;
}
Book::Book(char* a, char* b,char* c,int d, int e){
    Name.strcpy(a);
    Author.strcpy(b);
    Publisher.strcpy(c);
    releaseYear=d;
    pages=e;
}