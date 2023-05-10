#include<iostream>
#include<string>
using namespace std;

int main()
{
        int arr[10]= {1, 5, 7, 8, 2, 5, 2, 7, 3, 9};
        int i;
        cout<<"Reverse array is: ";
        for(i=9; i>=0; i--)
        {
            cout<<arr[i]<<", ";
        }
    return 0;
}
