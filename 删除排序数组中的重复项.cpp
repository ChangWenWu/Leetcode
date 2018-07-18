//
//  删除排序数组中的重复项.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/18.
//

#include <stdio.h>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return 1;
        int len = nums.size();
        for(int i = len - 1; i > 0; i--){
            while(i > 0 && nums[i] == nums[i-1]){
                nums.erase(nums.begin() + i - 1);
                i--;
            }
        }
        return nums.size();
    }
};
