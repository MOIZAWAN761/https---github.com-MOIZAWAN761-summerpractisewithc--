#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter the elements in array";
    for (int i = 0; i <10; i++)
    {
        cin>>arr[i];
    }

    //logic of sorting
    for ( int i = 0; i <=9; i++)
    {
        for ( int j = 0;j < 9-i; j++)
        {
            if (arr[j>arr[j+1]])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"value after sorting the array in ascending order"<<endl;
    for (int i = 0; i < 10; i++)
    {
       cout<<arr[i]<<endl;
    }
    
    
}