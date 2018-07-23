//
//  验证回文字符串.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/23.
//

#include <stdio.h>

//设置两个循环标志位，从字符串两边开始检索，跳过非字母和数字
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() <= 1) return true;
        for(int i = 0, j = s.length(); i < j; i++, j--){
            while(!isalpha(s[i]) && !isdigit(s[i]) && i < j) i++;
            while(!isalpha(s[j]) && !isdigit(s[j]) && i < j) j--;
            if(tolower(s[i]) != tolower(s[j]))return false;
        }
        return true;
    }
};
