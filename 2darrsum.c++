#include<iostream>
using namespace std;

void arrsum(int arr1[][100],int arr2[][100],int r_size,int col_size){
    for (int i = 0; i < r_size; i++)
    {
      cout<<"["<<"   ";
      for (int j = 0; j < col_size; j++)
      {
        cout<<arr1[i][j] + arr2[i][j]<<"   ";
      }

      cout<<"]"<<endl;
    }

}

int main(){
    int r_size,col_size;
    cout<<"enter the row size";
    cin>>r_size;
    cout<<"enter the col size";
    cin>>col_size;
    int arr1[r_size][100],arr2[r_size][100];

    //input of row 1

    cout<<endl<<"enter the elements in array 1"<<endl;

    for (int i = 0; i < r_size; i++)
    {
      cout<<"enter the element in row"<<i+1<<endl;
      for (int j = 0; j < col_size; j++)
      {
        cin>>arr1[i][j];
      }
      cout<<endl;
    }

    //input of row 2
    cout<<endl<<"enter the elements in array 2"<<endl;

    
    for (int i = 0; i < r_size; i++)
    {
      cout<<"enter the element in row"<<i+1<<endl;
      for (int j = 0; j < col_size; j++)
      {
        cin>>arr2[i][j];
      }
      cout<<endl;
    }
    

    //claculating sum

    arrsum(arr1,arr2,r_size,col_size);

    






}