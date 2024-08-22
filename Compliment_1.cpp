#include<iostream>
#include<cmath>
using namespace std;

int findComplement(int num)
{
    
    if(num==0)
        return 0;

    string binary= "";
    while(num>0)
    {
        if(num%2==0)
        {
            binary= "0"+ binary;
            num= num/2;
        }
        else
        {
            binary= "1"+ binary;
            num= num/2;
        }
    }

    for(int j=0; j<binary.length(); j++)
    {
        if(binary[j]== '1')
            binary[j]= '0';
        else
            binary[j]= '1';
    }

    int n= binary.length();
    int decimal=0;
    for(int i=0; i<=binary.length(); i++)
    {
        if(binary[n-i-1]== '1')
        {
            decimal= pow(2,i)+ decimal;
        }
    }

    return decimal;

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