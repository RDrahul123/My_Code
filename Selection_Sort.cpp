#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int selectionsort(int arr[], int n)
{
    int a;
    for()
}

int main()
{
    int arr[8]= {6, 1, 3, 8, 4, 0, 5, 9};
    int n= sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, n);
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}