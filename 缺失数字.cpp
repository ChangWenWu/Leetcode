//
//  缺失数字.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/6.
//

#include <stdio.h>

//3个循环，第一个循环找出最大的数，第二个循环计算1到n的和，第三个循环使用和减去数组元素，最后需判断是否存在0，缺少的是否是最大的n
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int max = 0;
        for(int i = 0; i < len; i++){
            if(nums[i] > max) max = nums[i];
        }
        int sum = 0;
        for(int i = 0; i <= max; i++){
            sum += i;
        }
        for(int i = 0; i < len; i++){
            sum -= nums[i];
        }
        if(max == len && sum == 0) return 0;
        if(sum == 0) return max+1;
        return sum;
    }
}
