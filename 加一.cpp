//
//  加一.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/19.
//

#include <stdio.h>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 1;
        vector<int> res;
        while(digits.size() > 0){
            int temp = digits.back();
            digits.pop_back();
            temp = temp + flag;
            res.insert(res.begin(),temp%10);
            flag = temp / 10;
        }
        if(flag > 0){
            res.insert(res.begin(),flag);
        }
        return res;
    }
};
