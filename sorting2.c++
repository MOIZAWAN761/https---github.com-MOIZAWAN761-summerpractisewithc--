#include<iostream>
using namespace std;

// sorting in descending ordr function
int sorting(int (&r)[]){
    

    for ( int i = 0; i < sizeof(r)/sizeof(int); i++)
    {
        int max=r[i];
        int loc=i;
        for (int j = i+1; i < sizeof(r)/sizeof(int); i++)
        {
            if (max<r[j])
            {
                max=r[j];
                loc=j;
            }
            int temp=r[i];
            r[i]=r[loc];
            r[loc]=temp;
            
        }
        

        
    }
    return r;
}

int main(){
    int size;
    cout<<"enter the size of array";
    int arr[size];
    cout<<"enter the elements in array";

    for (int i = 0; i <10; i++)
    {
       cin>>arr[i];
    }
    int (&r)[size]=arr;

    int (&r2)[]=sorting(r);
    for (int i = 0; i size; i++)
    {
        cout<<r2[i]<<endl;
    }
    

    
}