//
//  只出现一次的数字.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/18.
//

#include <stdio.h>

//对数组所有元素取异或操作，最后结果为只出现一次的元素
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int res = 0;
        for (int i = 0; i < len; i++) {
            res = s^nums[i];
        }
        return res;
    }
};
