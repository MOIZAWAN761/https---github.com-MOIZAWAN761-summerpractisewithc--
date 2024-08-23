#include<iostream>
using namespace std;

namespace n1
{
    int a=3;
} // namespace name
namespace n2
{
    int a=4;
} // namespace name
namespace n3
{
    int a=5;
} // namespace name


int main(){
    cout<<n1::a<<endl;
    cout<<n2::a<<endl;
    cout<<n3::a<<endl;
}

