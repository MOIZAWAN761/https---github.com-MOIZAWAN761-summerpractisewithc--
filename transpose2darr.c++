#include<iostream>
using namespace std;

int main(){
    int r_size,col_size;
    cout<<"enter the row size";
    cin>>r_size;
    cout<<"enter the col size";
    cin>>col_size;
    int arr1[r_size][col_size];
    int arr2[r_size][col_size];

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

    // //input of row 2
    // cout<<endl<<"enter the elements in array 2"<<endl;

    
    // for (int i = 0; i < r_size; i++)
    // {
    //   cout<<"enter the element in row"<<i+1<<endl;
    //   for (int j = 0; j < col_size; j++)
    //   {
    //     cin>>arr2[i][j];
    //   }
    //   cout<<endl;
    // }


     for (int i = 0; i < r_size; i++)
    {
      cout<<"[";
      for (int j = 0; j < col_size; j++)
      {
        
        cout<<"  "<<arr1[i][j];

      }
      cout<<"]"<<endl;
    }



    // after transpose
    for (int i = 0; i < col_size; i++)
    {
      cout<<"[";
      for (int j = 0; j < r_size; j++)
      {
        
        cout<<"  "<<arr1[j][i];

      }
      cout<<"]"<<endl;
    }
}