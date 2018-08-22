//
//  跳跃游戏.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/22.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>

//贪心算法，每次保留可以到达的最远位置
class Solution {
    public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), reach = 0;
        for (int i = 0; i < n; ++i) {
            if (i > reach || reach >= n - 1) break;
            reach = max(reach, i + nums[i]);
        }
        return reach >= n - 1;
    }
};
