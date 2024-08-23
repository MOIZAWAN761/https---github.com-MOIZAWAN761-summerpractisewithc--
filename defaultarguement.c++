#include<iostream>
using namespace std;
int add(int=0,int=0,int=0);
int main(){
int a,b,c;
cout<<"enter three numbers";
cin>>a>>b>>c;
cout<<add()<<endl;
cout<<add(a,b)<<endl;
cout<<add(a,c)<<endl;
}
int add(int a,int b,int c){
    return a+b+c;
}