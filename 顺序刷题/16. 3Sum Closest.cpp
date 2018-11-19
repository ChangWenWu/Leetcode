//
//  16. 3Sum Closest.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/19.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
// 双指针法
class Solution {
  public:
    int threeSumClosest(vector<int> &nums, int target) {
        if (nums.size() < 3)
            return 0;
        int ret = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            int front = i + 1;
            int back = nums.size() - 1;
            while (front < back) {
                int sum = nums[i] + nums[front] + nums[back];
                if (abs(sum - target) < abs(ret - target)) {
                    ret = sum;
                    if (ret == target)
                        return ret;
                }
                if (sum > target) {
                    back--;
                } else {
                    front++;
                }
            }
        }
        return ret;
    }
};
