#include <iostream>
public class Book{
    public:
    Book();
    Book(char* a, char* b,char* c,int d, int e);
    char* Name[75];
    char* Author[75];
    char* Publisher[75];
    int releaseYear;
    int pages;
    bool operator==();
}
