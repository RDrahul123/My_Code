#include<iostream>
using namespace std;

void twosum(int arr[], int n, int a)
{
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if((arr[i]+arr[j])==a)
                cout<<"[ "<<i<<", "<<j<<" ]";
        }
    }
}

int main()
{
    int arr[5]= {2, 7, 8, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter the value : ";
    cin>>a; 
    twosum(arr, n, a);
    return 0;
}