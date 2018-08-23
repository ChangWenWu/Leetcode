//
//  零钱兑换.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/23.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>

//动态规划解法，转移方程：dp[i]=min(dp[i],dp[i-coins[j]]+1);
class Solution {
    public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        int n=coins.size();
        if(n==0||amount==0) return 0;
        sort(coins.begin(),coins.end());
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size()&&coins[j]<=i;j++){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
        if(dp[amount]==amount+1) return -1;
        else return dp[amount];
    }
};
