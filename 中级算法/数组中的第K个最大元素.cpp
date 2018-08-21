//
//  数组中的第K个最大元素.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/17.
//

#include <stdio.h>

//快排思想
class Solution
{
public:
    int partition(vector<int>&a, int low, int high)
    {
        int first = low;
        int last = high;
        int key = a[first];
        
        while (first < last)
        {
            while (a[last] >= key && first < last)
                --last;
            swap(a[first], a[last]);
            
            while (a[first] <= key && first < last)
                ++first;
            swap(a[first], a[last]);
        }
        return first;
    }
    
    int findKth(vector<int>& a, int low, int high, int k)
    {
        int p = partition(a, low, high);
        if (k == high - p + 1)
            return a[p];
        
        else if (k - 1 < high - p)
            return findKth(a, p + 1, high, k);
        else
            return findKth(a, low, p - 1, k - high + p - 1);
    }
    
    int findKthLargest(vector<int>& nums, int k)
    {
        return findKth(nums, 0, nums.size() - 1, k);
    }
    
};
