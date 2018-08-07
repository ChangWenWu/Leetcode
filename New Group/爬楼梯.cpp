//
//  爬楼梯.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/30.
//

#include <stdio.h>

//直接使用递归算法会超时，应使用动态规划，使用两个int变量a和b存储爬n-1和n-2步楼梯的数量
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        int a = 2, b =3;
        for(int i = 4; i <= n; i++){
            int t = a + b;
            a = b;
            b = t;
        }
        return b;
    }
};
