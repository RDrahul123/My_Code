#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(nums1[i]==nums2[j])
                    v.push_back(nums1[i]);
            }
        }
        int a= v.size();
        for(int i=0; i<n; i++)
        {
            if(v[i]==v[i+1])
            {
                
            }
        }
        return v;
    }

int main()
{
    vector<int> nums1 {2, 2, 7, 5, 6};
    vector<int> nums2 {2, 3, 5, 7, 8};
    vector<int> ans= intersection(nums1, nums2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}