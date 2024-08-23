#include<iostream>
using namespace std;

int main(){
    float cubicft=7.481;
    int gallons;
    cout<<"please enter the number of gallons"<<endl;
    cin>>gallons;

    float galincbft=((float)gallons)/cubicft;
    cout<<"number of cubic in"<<gallons<<"is"<<galincbft;
}