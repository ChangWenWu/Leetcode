//
//  买卖股票的最佳时机.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/30.
//

#include <stdio.h>

//动态规划解法
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int begin = 0, end = 0, delta = 0, result = 0;
        for(int i = 0; i <= len - 1; i++){
            end = i;
            
            delta = prices[end] - prices[begin];
            
            
            if(delta <= 0){
                begin = i;
            }
            if(delta > result){
                result = delta;
            }
        }
        return result;
    }
};
