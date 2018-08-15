//
//  递增的三元子序列.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/9.
//

#include <stdio.h>
//使用两个变量记录遍历过得的元素中第一小和第二小的元素，碰到一个大于第二小的元素返回true
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        if(len < 3) return false;
        int first = nums[0];
        int second = INT_MAX;
        for(int i = 0; i < len; i++){
            if(nums[i] > second)return true;
            if(nums[i] > first && nums[i] < second) second = nums[i];
            if(nums[i] < first) first = nums[i];
        }
        return false;
    }
};
