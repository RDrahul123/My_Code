#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallestDistancePair(vector<int>& nums, int k) 
{
    vector<int> a;
    int b;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(i!=j)
            {
                if(nums[i]>nums[j])
                    a.push_back(nums[i]-nums[j]);
                else
                    a.push_back(nums[j]-nums[i]);
            }           
        }
    }
    sort(a.begin(), a.end());
    b = a[k-1];
    return b;
}

int main()
{
    vector<int> nums {1,3,1};
    int k= 1;
    int ans= smallestDistancePair(nums, k);
    cout<<ans;
    return 0;
}