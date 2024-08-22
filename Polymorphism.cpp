#include<iostream>
using namespace std;

class addtition
{
    public:
        void add(int a, int b)
        {
            int c= a+b;
            cout<<c<<endl;
        }

        void add(int a, int b, int c)
        {
            int d= a+b+c;
            cout<<d<<endl;
        }
};

int main()
{
    addtition a1;

    a1.add(2,4);
    a1.add(4,5,6);

    return 0;
}