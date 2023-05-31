#include<iostream>
#include<vector>
using namespace std;

int search_insert(vector<int> nums, int target)
{
    int a;
    int mid;
    int low= 0;
    int high= nums.size();
        
    if(target>nums[high])
        return high;

    while(low<=high)
    {
        mid= low+(high-low)/2;
        if(nums[mid]==target)
            return mid;
        else
        if(nums[mid]>target)
            high= mid-1;
        else
            low= mid+1;
    }
    return low;
}

int main()
{
    vector<int> nums {1, 3, 5, 6};
    int a = 5;
    int b = search_insert(nums, a);
    cout << b << endl;
    return 0;
}