#include<iostream>
using namespace std;
inline int square(int a,int b);
int main(){
    int y=square(10,15);
    cout<<y;

}
 int square(int a,int b){
    if (a>b)
    return a;
    else return b;
}