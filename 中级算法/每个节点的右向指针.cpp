//
//  每个节点的右向指针.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/13.
//

#include <stdio.h>
//递归解法，遍历二叉树，next只存在两种情况：1.兄弟节点 2.两个next相连节点的右节点与左节点
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        if(root->left && root->right){
            root->left->next = root->right;
        }
        if(root->left && root->next && root->next->left){
            root->right->next = root->next->left;
        }
        connect(root->left);
        connect(root->right);
    }
};
