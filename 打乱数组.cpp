//
//  打乱数组.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/31.
//

#include <stdio.h>

class Solution {
public:
    Solution(vector<int> nums): v(nums) {}
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return v;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> res = v;
        for (int i = 0; i < res.size(); ++i) {
            int t = i + rand() % (res.size() - i);
            swap(res[i], res[t]);
        }
        return res;
    }
    
private:
    vector<int> v;
};
