#include<iostream>
using namespace std;

int gcd(int a,int b){
    int gc;
    int min=(a<b)?a:b;
    for ( int i = 2; i <= min; i++)
    {
        if(a%i ==0 && b%i==0){
             gc=i;
        }
    }
    return gc;

}
int gcd(int a,int b,int c){
    int gc;
    int min=(a<b)?a:b;
    int min2=(min<c)?min:c;
    for ( int i = 2; i <= min2; i++)
    {
        if(a%i ==0 && b%i==0 && c%i==0){
             gc=i;
        }
    }
    return gc;

}

int main(){
    int num1,num2,num3;
    cout<<"enter three numbers";
    cin>>num1>>num2>>num3;
    int gcd1=gcd(num1,num2); //this fuinction call will be bind with function1 definiton having two arguements
    int gcd2=gcd(gcd1,num3);
    cout<<gcd2;
}