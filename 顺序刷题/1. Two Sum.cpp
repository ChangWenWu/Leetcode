//
//  1. Two Sum.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/13.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) != m.end()) {
                result.push_back(i);
                result.push_back(m[nums[i]]);
                break;
            }
            m[target - nums[i]] = i;
        }
        return result;
    }
};
