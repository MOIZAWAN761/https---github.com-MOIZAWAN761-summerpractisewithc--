#include<iostream>
using namespace std;

int *arrproduct(int arr1[][10],int arr2[][10],int r_size,int col_size){
int arr3[r_size][col_size];

    for (int i = 0; i < r_size; i++)
    {
      
      for (int j = 0; j < col_size; j++)
      {
        arr3[i][j]=0;
        for (int k = 0; i < col_size; i++)
        {
            arr3[i][j]+=arr1[i][k]+arr2[k][j];
        }
        
      }

      
    }
    int* ptr=&arr3[0][0];
    return ptr;
}

int main(){
    int r_size,col_size;
    cout<<"enter the row size";
    cin>>r_size;
    cout<<"enter the col size";
    cin>>col_size;
    int arr1[r_size][col_size],arr2[r_size][col_size];

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

    int *p;

    if (arr1[col_size]==arr2[r_size])
    {
       p= arrproduct(arr1,arr2,r_size,col_size);
    }
    else{
    cout<<"multiplicaton is not possible";
    }

    // product of array3

    for (int  i = 0; i <r_size ; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
           cout<<(*p)[i][j];
        }
        
    }
    

    






}