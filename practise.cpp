#include<iostream>
using namespace std;

int findsmax(int arr[],int size){
    int max,s_max;

    //loop for checking maximum value at index 1 and index 2
    if (arr[0]>arr[1])
    {
        max=arr[0];
        s_max=arr[1];
        
    }
    else{
        max=arr[1];
        s_max=arr[0];
    }
    
    
    for ( int i = 2; i < size; i++)
    {
        if (max<arr[i]){
            s_max=max;
            max=arr[i];
            
        }
        else{
            if (arr[i]>s_max)
            s_max=arr[i];
        }
    }
    return s_max;
}
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];

    }
    int smax=findsmax(arr,size);
    cout<<"the second largest elemant in array is"<<smax;
    

}