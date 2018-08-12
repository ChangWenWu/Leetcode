//
//  二叉树的锯齿形层次遍历.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/12.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//广度优先搜索，depth为偶数时插入数组尾部，奇数时插入数组头部
class Solution {
    public:
    
    void BFS(TreeNode * root, int depth, vector<vector<int>> &result){
        if(!root) return;
        if(depth >= result.size()){
            vector<int> v;
            result.push_back(v);
        }
        if(depth % 2 == 0)result[depth].push_back(root->val);
        else result[depth].insert(result[depth].begin(), root->val);
        BFS(root->left, depth+1, result);
        BFS(root->right, depth+1, result);
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        BFS(root, 0, result);
        return result;
    }
};
