#include<iostream>
#include<string.h>
using namespace std;

struct book inputfunc();
void outputfunc(struct book );

struct book
{
    // public:
    int book_id;
    int book_price;
    char book_title[20];
};




int main(){
struct book b1;
b1=inputfunc();
outputfunc(b1);


}
struct book inputfunc(){
    struct book b1;
    cout<<"enter the data "<<endl;
    cout<<"enter the book id "<<endl;
    cin>>b1.book_id;
    cout<<"enter the book price "<<endl;
    cin>>b1.book_price;
    cout<<"enter the book title "<<endl;
    cin.ignore();
    cin.getline(b1.book_title,20);
     return b1;
    }

    void outputfunc(struct book b1){
        cout<<"the id of book is #"<<b1.book_id<<endl;
        cout<<"the price  of book is RS"<<b1.book_price<<endl;
        cout<<"the title of book is \""<<b1.book_title<<"\""<<endl;
    }