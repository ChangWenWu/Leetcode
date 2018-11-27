//
//  18. 4Sum.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/27.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
// 解法同3Sum，双指针法
class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> ret;
        if (nums.size() < 4)
            return ret;

        sort(nums.begin(), nums.end());

        for (int k = 0; k < nums.size() - 3; k++) {
            for (int i = k + 1; i < nums.size() - 2; i++) {
                int front = i + 1;
                int back = nums.size() - 1;
                int targetNum = target - (nums[i] + nums[k]);

                while (front < back) {
                    int sum = nums[front] + nums[back];
                    if (sum == targetNum) {
                        vector<int> triplet(4, 0);
                        triplet[0] = nums[i];
                        triplet[1] = nums[front];
                        triplet[2] = nums[back];
                        triplet[3] = nums[k];
                        ret.push_back(triplet);
                        while (front < back && nums[front] == triplet[1])
                            front++;
                        while (front < back && nums[back] == triplet[2])
                            back--;
                    } else if (sum < targetNum) {
                        front++;
                    } else {
                        back--;
                    }
                }
                while (nums[i] == nums[i + 1])
                    i++;
            }
            while (nums[k] == nums[k + 1])
                k++;
        }
        return ret;
    }
};
