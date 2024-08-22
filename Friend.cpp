#include<iostream>
using namespace std;

class A
{
    private:
        int x;
    
    protected:
        int y;
    
    public:
        A()
        {
            x=10;
            y=20;
        }

    friend class B;
};

class B
{
    public:
        void display(A& a)
        {
            cout<<a.x<<endl;
            cout<<a.y<<endl;
        }
};

int main()
{
    A t;
    B b;
    b.display(t);
    return 0;
}
