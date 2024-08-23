#include<iostream>
using namespace std;
void rotate(int arr[],int size);
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    
    cout<<"enter the elements in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    rotate(arr,size);

    cout<<"these are elements after rotation"<<endl<<"[";
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i];
    }
    cout<<"]";
    

}



void rotate(int arr[],int size){

  cout<<"enter the type of rotation for right \"press 1  for left press-1";
  int type;
  cin>>type;


    int rotate,i,j,temp;
    cout<<"enter the number of time that u want to rotate";
    cin>>rotate;

    rotate%=size;



    // for left shift
if (type==-1)
{
  
    //first reverse the array


    for ( i = 0,j=size-1; i < j; i++,j--)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }


    // revesrse first elemnts that is necessary

    for ( i = 0,j=rotate-1; i < j; i++,j--)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    

    // rotate the last elements
    for ( i = rotate,j=size-1; i < j; i++,j--)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
}

else
{
    for ( i = 0,j=size-1; i < j; i++,j--)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }


    // revesrse first elemnts that is necessary

    for ( i = size-1,j=size-rotate; i > j; i--,j++)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    

    // rotate the first  elements
    for ( i = 0,j=size-1-rotate; i < j; i++,j--)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    
}

}
