//
//  颠倒整数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/23.
//

#include <stdio.h>


#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
class Solution {
public:
    int reverse(int x) {
        int y = 0
        while(x != 0){
            int temp = x % 10;
            if(y > INT_MAX || y < INT_MIN) return 0;
            y = y * 10 + n;
            x = x / 10;
        }
        return y;
    }
};
