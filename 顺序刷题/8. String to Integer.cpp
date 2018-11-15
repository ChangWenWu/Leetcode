//
//  8. String to Integer.cpp
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
    int myAtoi(string str) {
        bool bNeg = false;
        double ret = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' ') continue;
            if(str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9')){
                if(str[i] == '-' || str[i] == '+'){
                    bNeg = (str[i] == '-');
                    i++;
                }
                while(i < str.size() && str[i] >= '0' && str[i] <= '9'){
                    ret = ret * 10 + (str[i] - '0');
                    if(ret > INT_MAX){
                        break;
                    }
                    i++;
                }
                break;
            } else {
                break;
            }
        }
        if(bNeg) ret = 0 - ret;
        if(ret > INT_MAX) return INT_MAX;
        if(ret < INT_MIN) return INT_MIN;
        return ret;
    }
};
