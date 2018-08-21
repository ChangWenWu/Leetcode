//
//  搜索旋转排序数组.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/21.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>

//二分查找，添加判断条件，通过比较low，high，mid确定应该查找哪一半
class Solution {
    public:
    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low > high) return -1;
        int mid = (low + high) / 2;
        if(nums[mid] == target) return mid;
        if(nums[low] > nums[mid]){
            if(nums[mid] < target && nums[high] >= target) return binarySearch(nums, mid + 1, high, target);
            else return binarySearch(nums, low, mid - 1, target);
        }else{
            if(nums[mid] > target && nums[low] <= target) return binarySearch(nums, low, mid - 1, target);
            else return binarySearch(nums, mid + 1, high, target);
        }
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};
