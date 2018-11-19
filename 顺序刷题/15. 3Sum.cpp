//
//  15. 3Sum.cpp
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
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> ret;
        if (nums.size() < 3)
            return ret;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int front = i + 1;
            int back = nums.size() - 1;
            int target = -nums[i];

            while (front < back) {
                int sum = nums[front] + nums[back];
                if (sum == target) {
                    vector<int> triplet(3, 0);
                    triplet[0] = nums[i];
                    triplet[1] = nums[front];
                    triplet[2] = nums[back];
                    ret.push_back(triplet);
                    while (front < back && nums[front] == triplet[1])
                        front++;
                    while (front < back && nums[back] == triplet[2])
                        back--;
                } else if (sum < target) {
                    front++;
                } else {
                    back--;
                }
            }
            while (nums[i] == nums[i + 1])
                i++;
        }
        return ret;
    }
};

