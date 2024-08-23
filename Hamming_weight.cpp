#include<iostream>
using namespace std;

int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            count += (n & 1); 
            n >>= 1;          
        }
        return count;
    }

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int counting= hammingWeight(a);
    cout<<"Total number of 1's in "<<a<<" are : "<<counting<<endl;

    return 0;
}