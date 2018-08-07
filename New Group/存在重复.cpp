//
//  存在重复.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/18.
//

#include <stdio.h>

//依次将数组元素作为key存入Hashmap，碰到已存在的key则返回true
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1) return false;
        map<int,bool> m;
        for(int i = 0; i < len; i++){
            if (m.find(item) != m.end()) return true;
            m[item]=true;
        }
        return false;
    }
};
