#include<iostream>
using namespace std;

class number{
    private:
    int real;
    int imaginary; //instance member variable

    public:

    void setnum(int x,int y){
        real =x;
        imaginary=y;

    }

    void displaynum();

};
void number::displaynum(){
    cout<<real<<imaginary;
}

