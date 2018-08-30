//
//  求众数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/30.
//

#include <stdio.h>
//建立hashmap存储数字与出现次数之间的映射
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        unordered_map<int, int> m;
        for(auto item : nums){
            if(m.find(item) == m.end()){
                m[item] = 1;
            }else{
                m[item]++;
            }
            if(m[item] > len / 2) return item;
        }
        return 0;
    }
};
