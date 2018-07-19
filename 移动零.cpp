//
//  移动零.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/19.
//

#include <stdio.h>

//设置两个标志位i与j遍历数组，i指向第一个出现的0，j为遍历的标志位，若遍历时j对应的元素非零，则与i对应的元素进行交换，同时i加1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        for(int j = 0; j < len; j++){
            if(nums[i] == 0 && nums[j] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            if(nums[i] != 0 && nums[j] == 0){
                i = j;
            }
        }
    }
};
