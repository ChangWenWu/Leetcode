//
//  最长上升子序列.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/24.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//动态规划解法，状态转移方程:dp[i] = max{dp[j] + 1} ,其中0<=j<i且nums[i]>nums[j]
class Solution {
    public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        int dp[len];
        dp[0] = 1;
        int result = 0;
        for(int i = 0; i < len; i++){
            dp[i] = 1;
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j] && dp[j] + 1 > dp[i] ){
                    dp[i] = dp[j] + 1;
                }
            }
            if(dp[i] > result) result = dp[i];
        }
        return result;
    }
};
