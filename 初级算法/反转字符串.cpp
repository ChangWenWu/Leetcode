//
//  反转字符串.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/23.
//

#include <stdio.h>

//从字符串两边开始逐渐交换字符
class Solution {
public:
    string reverseString(string s) {
        int len = s.length();
        for(int i = 0; i <= len /2; i++){
            char t = s[i];
            s[i] = s[len - i - 1];
            s[len - i - 1] = t;
        }
        return s;
    }
};
