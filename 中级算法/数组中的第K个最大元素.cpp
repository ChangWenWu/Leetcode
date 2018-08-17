//
//  数组中的第K个最大元素.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/17.
//

#include <stdio.h>

//快排思想
class Finder
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
        if (k == p - low + 1)
            return a[p];
        
        else if (k - 1 < p - low)
            return findKth(a, low, p - 1, k);
        
        else
            return findKth(a, p + 1, high, k - p + low - 1);
    }
    
    int findKth(vector<int> a, int n, int K)
    {
        return findKth(a, 0, n - 1, K);
    }
    
};
