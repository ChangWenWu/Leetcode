//
//  阶乘后的零.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/26.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//问题转化为计算n因式分解后5的个数
class Solution {
    public:
    int trailingZeroes(int n) {
        int result = 0;
        while(n >= 5){
            n = n / 5;
            result += n;
        }
        return result;
    }
};
