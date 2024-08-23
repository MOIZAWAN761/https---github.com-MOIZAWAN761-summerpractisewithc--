#include<iostream>
using namespace std;

int main(){
    cout<<"plz enter the amount in dollar";
    int amount;
    cin>>amount;

    float pound=((float)amount)/1.487;
    float french=((float)amount)/0.172;
    float german=((float)amount)/0.584;
    float japnese=((float)amount)/0.00955;


    cout<<"the amount of dollar in pound is"<<pound<<endl
    <<"the amount of dollar in french is"<<french<<endl
    <<"the amount of dollar in german is"<<german<<endl
    <<"the amount of dollar in japnese is"<<japnese<<endl;

    
}