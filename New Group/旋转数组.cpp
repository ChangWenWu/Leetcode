//
//  旋转数组.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/18.
//

#include <stdio.h>

//先将k对数组大小取模，然后将数组后K个数依次插入到数组首部
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(len < 2) return;
        if(k >= len) k = k % len;
        if(k <= 0) return;
        for(int i = len - k; i <= len - 1; i++){
            nums.insert(nums.begin() + i + k - len,nums[i]);
            nums.erase(nums.begin() + i + 1);
        }
    }
};
