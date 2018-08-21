//
//  在排序数组中查找元素的第一个和最后一个位置.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/21.
//

#include <stdio.h>

//二分查找到指定元素，再分别向前后遍历找到重复元素起止点
class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low > high) return -1;
        int mid = (low + high) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) return binarySearch(nums, low, mid - 1, target);
        else return binarySearch(nums, mid + 1, high, target);
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int start = -1, end = -1;
        int p = binarySearch(nums, 0, nums.size() - 1, target);
        
        int i = p;
        while(i >= 0 && nums[i] == target){
            start = i;
            i--;
        }
        i = p;
        while(i < nums.size() && i >= 0 && nums[i] == target){
            end = i;
            i++;
        }
        result.push_back(start);
        result.push_back(end);
        return result;
        
    }
};
