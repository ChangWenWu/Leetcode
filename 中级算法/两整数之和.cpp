//
//  两整数之和.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/29.
//

#include <stdio.h>
//位运算，先做与运算得到carry（计算x与y同为1的位），再异或（求和），carry左移一位，循环
class Solution {
public:
    int getSum(int x, int y) {
        while (y != 0) {
            int carry = x & y;
            x = x ^ y;
            y = carry << 1;
        }
        return x;
    }
};
