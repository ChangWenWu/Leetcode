//
//  全排列.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/15.
//

#include <stdio.h>

class Solution {
public:
    void DFS(vector<vector<int>>& res, int floor, vector<int>& nums){
        if(floor >= nums.size()) res.push_back(nums);
        for(int i = floor; i < nums.size(); i++){
            swap(nums[i], nums[floor]);
            DFS(res, floor + 1, nums);
            swap(nums[i], nums[floor]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        DFS(res, 0, nums);
        return res;
    }
};
