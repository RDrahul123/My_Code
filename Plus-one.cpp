#include<iostream>
#include<vector>
using namespace std;

vector<int> plus_one(vector<int> digits)
{
     vector<int> a;
    int high= a.size();
    int low=0;
    
    a.push_back(digits);
    for(int i=0; i<high; i++)
    {
        cout<<a[i]<<endl;
    }

    if(low==high)
    {
        if(digits[high]==9)
        {
            a.push_back(1);
            a.push_back(0);
        }
        else
            a.push_back(digits[high]+1);
    }
    else
    {
        if(a[high]==9)
        {
            a.push_back(digits[high-1]+1);
            a.push_back(0);
        }
        else
            a.push_back(digits[high]+1);
    }
    return a;
}

int main()
{
    vector<int> nums{4, 2, 3, 6};
    vector<int> ans = plus_one(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}