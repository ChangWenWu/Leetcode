//
//  不同路径.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/23.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//直接使用递归算法会超时，应使用动态规划解法，方程为dp[n,m] = dp[n-1,m] + dp[n,m-1]
class Solution {
    public:
    int uniquePaths(int m, int n) {
        int dp[ n ][ m ];
        dp[0][0] = 1;
        
        for(int i = 1; i < n; i++){
            dp[i][0] = 1;
        }
        
        for(int j = 1; j < m; j++){
            dp[0][j] = 1;
        }
        
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
    }
};
