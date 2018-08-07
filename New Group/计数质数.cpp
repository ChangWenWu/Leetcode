//
//  计数质数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/1.
//

#include <stdio.h>
//创建标志数组，将质数的倍数标记为非质数，剩余的为质数
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> flag(n, true);
        for(int i = 2; i * i < n; i++){
            if(flag[i]){
                for(int j = i * i; j < n; j += i){
                    flag[j] = false;
                }
            }
        }
        int res = 0;
        for(int i = 2; i < n; i++){
            if(flag[i]){
                res++;
            }
        }
        return res;
    }
};

