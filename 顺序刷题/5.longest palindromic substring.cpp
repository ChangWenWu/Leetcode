//
//  5.longest palindromic substring.cpp
//  CleanArchitectureRxSwift
//
//  Created by Jarvis Wu on 2018/11/14.
//  Copyright © 2018年 sergdort. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
// 动态规划算法，从字母中心向两边扩散
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int start = 0, maxLen = 1;
        for(int i = 0; i < s.size();){
            if(s.size() - i <= maxLen / 2) break; // 剪枝
            int left = i, right = i;
            // 遇见相同元素时直接跳到最后一位
            while(right < s.size() - 1 && s[right] == s[right + 1]) right++;
            i = right + 1;
            // 扩散
            while (left > 0 && right < s.size() - 1 && s[left - 1] == s[right + 1]) {
                left--;
                right++;
            }
            if(maxLen < right - left + 1){
                start = left;
                maxLen = right - left + 1;
            }
        }
        return s.substr(start, maxLen);
    }
};
