//
//  最大子序和.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/30.
//

#include <stdio.h>

#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int begin = 0, end = 0, sum = 0, result = INT_MIN;
        for(int i = 0; i <= len - 1; i++){
            sum += nums[i];
            result = max(result,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return result;
    }
};
