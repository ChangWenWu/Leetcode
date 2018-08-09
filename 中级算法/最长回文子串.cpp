//
//  最长回文子串.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/9.
//

#include <stdio.h>
//动态规划思想，使用dp[i][j]记录下标i到j的回文子串的长度，不是回文子串则为0，当s[i] = s[j]时，使用公式dp[i][j] = dp[i+1][j-1]+2构建矩阵
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        if(len <= 1) return s;
        vector<vector<int>> dp(len);
        for(int i = 0; i <= len - 1; i++){
            for(int j = 0; j <= len -1; j++){
                if(i == j) dp[i].push_back(1);
                else dp[i].push_back(0);
            }
        }
        
        int start = 0;
        int maxLen = 1;
        for(int j = 1; j <= len - 1; j++){
            for(int i = j - 1; i >= 0; i--){
                if(s[i] == s[j]){
                    if(j - i == 1){
                        dp[i][j] = 2;
                    }
                    else{
                        if(dp[i + 1][j - 1] > 0){
                            dp[i][j] = dp[i + 1][j - 1] + 2;
                        }
                        else dp[i][j] = 0;
                    }
                }
                
                if(dp[i][j] > maxLen){
                    maxLen = dp[i][j];
                    start = i;
                }
            }
        }
        
        return s.substr(start, maxLen);
    }
};
