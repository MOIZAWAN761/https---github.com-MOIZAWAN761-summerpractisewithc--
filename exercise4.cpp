#include<iostream>
#include<ctype.h>

using namespace std;

int main(){
    char letter;
    cout<<"plz enter a letter";
    cin>>letter;

    int val=islower(letter);
    cout<<endl<<"value is"<<val;
    
}