//
//  第一个错误的版本.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/28.
//

#include <stdio.h>

//二分搜索的思想，注意int相加可能溢出
bool isBadVersion(int version);

class Solution {
public:
    int BS(long low, long high){
        if(low >= high) return high;
        long middle = (low + high) / 2;
        if(isBadVersion(middle)){
            return BS(low, middle);
        }else{
            return BS(middle + 1, high);
        }
    }
    
    int firstBadVersion(int n) {
        return BS(1, n);
    }
};
