#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseString(vector<char>& s) {

    int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        std::swap(s[left], s[right]);
        left++;
        right--;
    }

    for(char c : s)
    {
        cout<<c;
        
    }

}

int main()
{
    vector<char> a = {'h', 'e', 'l', 'l', 'o'};
    reverseString(a);

    return 0;

}
