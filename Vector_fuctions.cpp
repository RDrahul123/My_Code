#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;

    for(int i=1; i<=5; i++)
        a.push_back(i);
    
    for(auto i= a.begin(); i!= a.end(); ++i)
        cout<<*i<<" ";
    cout<<endl;

    for(auto ib= a.cbegin(); ib!= a.cend(); ++ib)
        cout<<*ib<<" ";
    cout<<endl;

    for(auto ir= a.rbegin(); ir!= a.rend(); ++ir)
        cout<<*ir<<" ";
    cout<<endl;

    for(auto i= a.crbegin(); i!= a.crend(); ++i)
        cout<<*i<<" ";
    cout<<endl;

    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;
    cout<<"Max Size : "<<a.max_size()<<endl;

    a.resize(4);
    a.shrink_to_fit();
    for(auto i=a.begin(); i!= a.end(); ++i)
        cout<<*i<<" ";

}