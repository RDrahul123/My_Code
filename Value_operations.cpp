#include<iostream>
#include<vector>
using namespace std;

int final(vector<string> operations)
{
    int a= 0;
    for(auto i=0; i<operations.size(); i++)
    {
        if(operations[i]=="X++")
            a++;
        else
        if(operations[i]=="X--")
            a--;
        if(operations[i]=="++X")
            ++a;
        if(operations[i]=="--X")
            --a;
    }
    return a;
}

int main()
{
    vector<string> op {"++X","++X","X++"};
    int x = final(op);
    cout<<x;
}