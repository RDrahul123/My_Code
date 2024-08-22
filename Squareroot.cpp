/*
Prgram to find how many perfect squares are there before a 
particular number
*/


#include<iostream>
using namespace std;

void sqaureroot(int x)
{
    int y=0;
    int i=1;
    while (i*i<x)
    {
        y++;
        i++;
    }    
    cout<<"Total number of perfect squares before "<<x<<" are : "<<y<<endl; 
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    sqaureroot(n);
}