//
//  二叉树的层次遍历.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/27.
//

#include <stdio.h>
//递归算法中序遍历二叉树，使用depth记录当前层数，层数每加1即加入该层数组，并将对应的节点的值加入该层数组中
class Solution {
    void BFS (TreeNode* root, vector<vector<int>>& result, int depth){
        if(!root)return;
        if(result.size() < depth){
            vector<int> v;
            result.push_back(v);
        }
        result[depth - 1].push_back(root->val);
        BFS(root->left,result,depth + 1);
        BFS(root->right,result,depth + 1);
    }
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)return result;
        BFS(root,result,1);
        return result;
    }
};
