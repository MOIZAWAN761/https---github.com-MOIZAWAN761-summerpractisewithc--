#include<iostream>
using namespace std;
void changeval(int &a,int &b){
    a++;
    b++;
}
int main(){
    int a=10;
    int b=20; 
    int &r1=a;
    int &r2=b;
     changeval(r1,r2);
     cout<<"the value of a"<<a<<endl;
     cout<<"the value of b"<<b<<endl;

    
}