//
//  位1的个数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/2.
//

#include <stdio.h>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        while(n > 0){
            result += n % 2;
            n = n / 2;
        }
        return result;
    }
};
