//
//  快乐数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/25.
//

#include <stdio.h>

//使用hash表存储计算过的结果，每次查找计算结果，若有重复则为无限循环
class Solution {
public:
    int squares(int n) {
        int result = 0;
        int sq = 0;
        for (; n>0; n/=10) {
            sq = n%10;
            result += (sq * sq);
        }
        return result;
    }
    
    bool isHappy(int n) {
        
        if (n==1) return true;
        
        map<int, bool> m;
        m[n]=true;
        
        while (n!=1) {
            n = squares(n);
            if (m.find(n) != m.end()){
                return false;
            }
            m[n] = true;
        }
        
        return true;
    }
    
};
