/*

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

*/

#include<iostream>
using namespace std;

int findComplement(int num) {
        int mask=0;
        int temp= num;

        while(temp!=0)
        {
            mask= (mask << 1) | 1;
            temp >>= 1;
        }

        int compliment = num ^ mask;

        return compliment;
    }

int main()
{
    int result;
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    result= findComplement(a);
    cout<<"Compliment of the number is : "<<result<<endl;

    return 0;
}