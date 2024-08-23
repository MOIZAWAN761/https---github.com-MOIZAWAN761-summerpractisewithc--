#include<iostream>
#include<string.h>
using namespace std;

struct book{
    private:
    int book_price;
    char book_title[10];
    int pages;

    public:
    void getinput(){
        cout<<"enter the book price";
        cin>>book_price;
        cout<< endl <<"enter the book title";
        cin.ignore();
        cin.getline(book_title,10);
        cout<< endl<<"enter the book pages";
        cin>>pages;
    }

    void display(){
        cout<<endl<<book_title<<endl<<book_price<<endl<<pages;
    }

};

int main(){
    book b1;
    b1.getinput();
    b1.display();
}