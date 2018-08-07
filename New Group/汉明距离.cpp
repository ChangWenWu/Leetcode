//
//  汉明距离.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/3.
//

#include <stdio.h>

//先做异或操作，再计算位1的个数
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        
        int result = 0;
        while(z > 0){
            result += z % 2;
            z = z / 2;
        }
        return result;
    }
};
