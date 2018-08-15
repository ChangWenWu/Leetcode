//
//  子集.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/15.
//

#include <stdio.h>

//递归解法
class Solution {
public:
    void DFS(vector<int> &nums,vector<int> temp,int depth,vector<vector<int> > &result)
    {
        if(depth == nums.size())
        {
            result.push_back(temp);
            return;
        }
        DFS(nums,temp,depth + 1,result);
        temp.push_back(nums[depth]);
        DFS(nums,temp,depth + 1,result);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> t;
        DFS(nums,t,0,res);
        return res;
    }
};
