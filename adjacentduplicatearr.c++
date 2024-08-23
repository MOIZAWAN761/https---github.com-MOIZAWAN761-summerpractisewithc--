#include<iostream>
using namespace std;
int finddup(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==arr[i+1])
        {
            return arr[i];
            
        }
        
    }
    return;
}

int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;

    int arr[size];
    cout<<"please enter the element in array";
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    int dupnum=finddup(arr,size);
    cout<<"the first adjacent duplicate element in array is "<<dupnum;
}