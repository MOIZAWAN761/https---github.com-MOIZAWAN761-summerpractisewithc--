#include<iostream>
using namespace std;

class somedata{
    public:
    int data;
    public:
    void setdata(int d){
        data=d;
    }
    void showdata(){
        cout<<"data is :"<<data<<endl;
    }
};


int main(){
    
    somedata item1;
    
    item1.setdata(777);
    item1.showdata();

}