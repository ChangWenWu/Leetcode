//
//  打家劫舍.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/31.
//

#include <stdio.h>

//动态规划思想，推算公式为dp(n) = max(dp(n-1), dp(n-2)+nums[i])
class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0, b = 0;
        for(auto item: nums){
            int max = max(a, b + item);
            b = a;
            a = max;
        }
        return a;
    }
};
