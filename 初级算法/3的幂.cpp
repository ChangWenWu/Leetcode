//
//  3的幂.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/2.
//

#include <stdio.h>

//若int范围内最大的3的幂能整除n,则n为3的幂
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 ? (1162261467%n==0) : false;
    }
};
