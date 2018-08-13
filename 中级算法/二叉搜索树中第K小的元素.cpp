//
//  二叉搜索树中第K小的元素.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/13.
//

#include <stdio.h>

//计算当前节点的排名（左子树节点个数+1），若k大于排名，则目标节点处于右子树，递归查找右子树中排名为k-rank的节点，若k小于排名，递归查找左子树中排名为k的节点
class Solution {
public:
    int numberOfNode(TreeNode* root){
        if(!root) return 0;
        return 1 + numberOfNode(root->left) + numberOfNode(root->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
        int rank = numberOfNode(root->left) + 1;
        if(k == rank) return root->val;
        if(k > rank) return kthSmallest(root->right, k - rank);
        if(k < rank) return kthSmallest(root->left, k);
    }
};
