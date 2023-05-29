#include<iostream>
#include<vector>
using namespace std;

int pair1(vector<int> nums)
{
    int ans= 0;
    int b= nums.size();
    for(int i=0; i<b; i++)
        for(int j=i+1; j<nums.size(); j++)
            if(nums[i]==nums[j])
                ans++;
    return ans; 
}

int main()
{
    vector<int> nums {1,2,3,1,1,3};
    int n = pair1(nums);
    cout<<n;
    return 0;
}