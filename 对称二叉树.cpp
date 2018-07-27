//
//  对称二叉树.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/27.
//

#include <stdio.h>
//使用递归思想分解问题，判断跟节点的左子树和右子树是否对称，再分别判断左边非根节点的左子树和右子树与右边非根节点的右子树与左子树是否对称
class Solution {
public:
    isSymmetric(TreeNode* left, TreeNode* right){
        if(!left && !right) return true;
        if((!left && right) || (left && !right)) return false;
        if(left->val != right->val) return false;
        return isSymmetric(left->left,right->right) && isSymmetric(left->right,right->right);
    }
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root->left,root->right);
    }
};
