#include<iostream>
using namespace std;

int findsmax(int arr[],int size){
    int max=0;
    int smax=0;
    for ( int i = 0; i < size; i++)
    {
        if (max>arr[i]){
            smax=max;
            max=arr[i];
            
        }
    }
    return smax;
}
int main(){
    int size,arr[size];
    cout<<"enter the size of array";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];

    }
    int smax=findsmax(arr,size);
    cout<<"the second largest elemant in array is"<<smax;
    

}