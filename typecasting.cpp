#include<iostream>
using namespace std;
int main(){
    int a=150000008;
    a=(static_cast<long double>(a*10));
    cout<<sizeof(a);
}