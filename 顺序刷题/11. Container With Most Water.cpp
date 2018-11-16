//
//  11. Container With Most Water.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/16.
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
    int maxArea(vector<int> &height) {
        ;
        int left = 0, right = (int) height.size() - 1, ret = 0;
        while (left < right) {
            ret = max(ret, (right - left) * min(height[left], height[right]));
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return ret;
    }
};
