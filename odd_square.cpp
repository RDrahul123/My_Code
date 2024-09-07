//Write a program that takes an integer input, n, from the user. 
//The program should then calculate the sum of the squares of all odd natural 
//numbers up to n and including n if n is odd, or up to the nearest odd number less 
//than n if n is even. Additionally, for each odd number squared, print a running total of the sum.
//For example, if n=5, the output should reflect the cumulative sum of 
//squares of 1, 3, and 5. If n=8, the program should calculate and display the progression of 
//the sum of squares for 1, 3, 5, and 7

#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Square sum of numbers: ";
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum+=(i*i);
            cout<<i<<", ";
        }
    }

    cout<<endl<<"Sum : "<<sum;
    return 0;
}