//
//  颜色分类.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/16.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//三向切分快速排序
class Solution {
    public:
    void sortColors(vector<int>& nums) {
        int start = -1;
        int end = nums.size();
        for(int i = 0; i < end;){
            if(nums[i] == 1){
                i++;
                continue;
            }
            if(nums[i] == 0)swap(nums[++start],nums[i++]);
            else swap(nums[--end],nums[i]);
        }
    }
};
