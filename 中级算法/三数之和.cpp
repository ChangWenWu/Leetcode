//
//  三数之和.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/7.
//

#include <stdio.h>
//先将数组排序，使用3个变量i,j,k遍历数组，选定i之后，使用快排思想在比i大的数中从两头开始检索，查找和为0-nums[i]的元素，若两数之和等于target,存入结果数组中；若大于target，右边的标志位向左移动；若小于target，左边的标志位向右移动。
//去重方法：遇到相同元素即可跳过
//剪枝优化：若nums[i]为正数即可结束循环
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < len; i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = len - 1;
            int target = 0 - (nums[i]);
            while(j < k){
                if(nums[j] + nums[k] == target){
                    result.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[k] == nums[k - 1]) k--;
                    while(j < k && nums[j] == nums[j + 1]) j++;
                    k--;
                    j++;
                }else if(nums[j] + nums[k] > target){
                    while(j < k && nums[k] == nums[k - 1]) k--;
                    k--;
                }else{
                    while(j < k && nums[j] == nums[j + 1]) j++;
                    j++;
                }
            }
        }
        return result;
    }
};
