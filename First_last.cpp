#include<iostream>
#include<algorithm>
using namespace std;

void firstlast(int arr[], int n, int a)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==a)
        {
            cout<<"First Element found at : "<<i<<endl;
            break;}
    }

    for(int i=n; i>0; i--)
    {
        if(arr[i]==a)
        {
            cout<<"Last Element found at : "<<i<<endl;
            break;}
    }
}

int main()
{
    int arr[10]= {1, 8, 4, 4, 0, 6, 9, 5, 2, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter the number to be searched : ";
    cin>>a;
    firstlast(arr, n, a);
    return 0;
}