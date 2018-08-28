//
//  分数到小数.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/28.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//使用一个hashmap存储出现过的小数位
class Solution {
    public:
    string fractionToDecimal(int numerator, int denominator) {
        long long t = numerator, d = denominator;
        map<long long, int> A;
        string ans;
        if (t*d < 0) ans = "-";
        t = abs(t), d = abs(d);
        ans += to_string(t / d);
        t %= d;
        if (!t) return ans;
        ans += '.';
        while (t) {
            if (A.count(t)) {
                ans.insert(A[t], "("), ans.push_back(')');
                return ans;
            }
            A[t] = ans.size(), ans += '0' + t * 10 / d;
            t = t * 10 % d;
        }
        return ans;
    }
};
