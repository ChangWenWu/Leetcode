//
//  7. Reverse Integer.cpp
//  Leetcode
//
//  Created by Jarvis Wu on 2018/11/15.
//  Copyright © 2018年 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x == 0) return x;
        bool bNeg = false;
        
        // 保存负数标志位
        if(x < 0){
            bNeg = true;
            x = 0 - x;
        }
        
        // 转为字符串
        string s = to_string(x);
        double ret = 0;
        
        for(int i = s.size() - 1; i >= 0; i--){
            if(ret * 10 > INT_MAX) return 0;
            ret = ret * 10 + (int)s[i];
        }
        
        if(bNeg) ret = 0 - ret;
        return ret;
    }
};
