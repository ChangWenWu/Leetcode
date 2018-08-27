//
//  x 的平方根.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/27.
//

#include <stdio.h>

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        double last = 0;
        double res = 1;
        while (res != last)
        {
            last = res;
            res = (res + x / res) / 2;
        }
        return int(res);
    }
};
