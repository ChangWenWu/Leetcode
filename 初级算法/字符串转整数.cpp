//
//  字符串转整数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/23.
//

#include <stdio.h>

#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
class Solution {
public:
    int myAtoi(string str) {
        int len = str.length();
        int re = 0;
        bool bFirstNa = true;
        for(int i = 0; i < len; i++){
            while(!isdigit(s[i]) && s[i] != '-' && i < len) i++;
            if(s[i] == '-'){
                if(bFirstNa){
                    re = -re;
                }
                bFirstNa
            }
        }
    }
};
