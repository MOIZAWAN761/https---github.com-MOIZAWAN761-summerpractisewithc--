#include<iostream>
using namespace std;

// void sort(int arr[],int size){
//     int min,loc;
//     for (int i = 0; i < size-1; i++)
//     {
//        min=arr[i];
//        loc=i;
//        for (int j = i+1; j < size; j++)
//        {
//         if (arr[j]<min)
//         {
//           min=arr[j];
//           loc=j;
//         }
//         int temp=arr[i];
//         arr[i]=min;
//         arr[loc]=temp;
//        }
       
//     }
    
// }
void sort(int arr[], int size) {
    int min, loc;
    for (int i = 0; i < size - 1; i++) {
        min = arr[i];
        loc = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                loc = j;
            }
        }
        // Swap only after finding the minimum element in the inner loop
        int temp = arr[i];
        arr[i] = min;
        arr[loc] = temp;
    }
}
int checkduplicate(int arr[], int size) {
    int i = 0, j = 1, count = 0;
    while (i < size - 1) {
        if (arr[i] == arr[j]) {
            count++;
            while (arr[i] == arr[j]) {
                j++;
            }
        }
        i = j;
        j = j + 1;
    }
    return count;
}

// int checkduplicate(int arr[],int size){
//     int i=0,j=1,count=0;
//     while (i<size-2)
//     {
//        if (arr[i]==arr[j])
//        {
//         count++;
//         while (arr[i]==arr[j])
//         {
//             j++;
//         }
        
//        }
//        i=j;
//        j=j+1;
       
//     }
//      return count;
// }

int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    cout<<"enter the elemeemts in array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    sort(arr,size);for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
   cout<<"the number of duplicate element in arry is "<< checkduplicate(arr,size);
   
   
//    now duplicate element will be check
}