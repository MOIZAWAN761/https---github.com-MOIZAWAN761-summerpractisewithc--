#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int width;

    public:
    void getdata(){
        cout<<"enter the length";
        cin>>length;
        cout<<endl<<"enter the width";
        cin>>width;
    }

    int findarea(){
        int area=length*width;
        return area;
    }

    int findperimeter(){
        int perimeter=2*(length+width);
        return perimeter;
    }
    
    void showdata(){
        cout<<endl<<"the lenght of rectangle"<<length<<endl<<"the width of rectangle is"<<width;
    }
    
};

int main(){
    rectangle r1;
    r1.getdata();
    r1.showdata();
    cout<<endl<<"the area of rectangle is"<<r1.findarea();
    cout<<endl<<"the perimeter of rectangle is"<<r1.findperimeter();
}