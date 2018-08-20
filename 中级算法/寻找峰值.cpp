//
//  寻找峰值.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/20.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//二分查找思想，取中间元素，中间元素值大于左边，则左边存在峰值，反之右边存在峰值
class Solution {
    public:
    int findPeak(vector<int>& nums, int low, int high){
        if(high - low <= 1){
            if(nums[high] > nums[low])return high;
            else return low;
        }
        int mid = (low + high)/2;
        if(nums[mid] > nums[mid - 1]) return findPeak(nums, mid, high);
        else return findPeak(nums, low, mid);
    }
    
    int findPeakElement(vector<int>& nums) {
        return findPeak(nums, 0, nums.size() - 1);
    }
};
