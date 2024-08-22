#include<iostream>
using namespace std;

/* 
template <typename T> T mymax(T a, T b)
{
    return(a>b) ? a : b;
}

int main()
{
    cout<<mymax<int>(3,4)<<endl;
    cout<<mymax<double>(5.0, 2.0)<<endl;
    cout<<mymax<char>('a', 'h');

    return 0;
}
*/

template <typename T> 
class box 
{
    private: 
        T value;
    
    public:
        box(T v) : value(v) {}

    void display()
    {
        cout<<value;
    }
};

int main()
{
    box<int> intbox(4);
    intbox.display();

    return 0;
}