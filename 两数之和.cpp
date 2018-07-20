//
//  两数之和.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/20.
//

#include <stdio.h>

//遍历数组，以数组元素为Key，下标为value构建hashmap，再次遍历数组元素，在map中寻找target - numsp[i]
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;
        int len = nums.size();
        for(int i = 0; i < len; i++){
            m[nums[i]] = i;
        }
        
        for(int i = 0; i < len; i++){
            int t = target - nums[i];
            if(m.count(t) && m[t] != i){
                res.push_back(i);
                res.push_back(m[t]);
                break;
            }
        }
        return res;
        
    }
};
