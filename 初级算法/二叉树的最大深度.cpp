//
//  二叉树的最大深度.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/26.
//

#include <stdio.h>
//递归思想分解问题，计算一个节点的左子树和右子树的深度
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};
