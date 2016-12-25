#include "Book.h"

using namespace std;

int main() {
    ifstream file ("d:/dataBaseThree.csv");
    getLinesQuantity(); //pre-loading of a file to calculate number of lines
    list<Book> Library;
    ifstream ferrors_log("d:/fatal_errors_log.txt");
    ifstream lerors_log("d:/fatal_errors_log.txt");

    Book input;
    for (int i=0;i<lines;i++){
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
            lerors_log>>input;
            continue;
        }
        catch (...){
//            ferrors_log>>"Fatal error at ">>cur_line>>": ";
            ferrors_log>>input;
            pos=next_pos;
            cur_line++;
            continue;
        }
        Library.push_back(input);
    }
    file.close();

    cout<<"Library contains: "<<endl;
    for(list<Book>::iterator it=Library.begin(); it!=Library.end();cout<<*it){
        cout<<*it;
    }
    return 0;
}