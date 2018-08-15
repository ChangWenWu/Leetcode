//
//  全排列.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/15.
//

#include <stdio.h>

//递归解法
class Solution {
public:
    void DFS(vector<vector<int>>& res, int depth, vector<int>& nums){
        if(depth >= nums.size()) res.push_back(nums);
        for(int i = depth; i < nums.size(); i++){
            swap(nums[i], nums[depth]);
            DFS(res, depth + 1, nums);
            swap(nums[i], nums[depth]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        DFS(res, 0, nums);
        return res;
    }
};
