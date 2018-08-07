//
//  验证二叉搜索树.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/27.
//

#include <stdio.h>

//记录子树的区间范围，使用递归判断左子树和右子树
class Solution {
public:
    bool isValidTree(TreeNode* root, long max, long min){
        if(!root) return true;
        if(root->val >= max && root->val <= min) return false;
        return isValidTree(root->left,root->val,min) && isValidTree(root->right,max,root->val);
    }
    bool isValidBST(TreeNode* root) {
        return isValidTree(root ,LONG_MAX, LONG_MIN);
    }
};
