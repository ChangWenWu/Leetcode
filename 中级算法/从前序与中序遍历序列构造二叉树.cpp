//
//  从前序与中序遍历序列构造二叉树.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/12.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//递归思想将问题分解，使用4个标志位记录构造子树的区间
class Solution {
    public:
    TreeNode* buildSubTree(vector<int>& preorder, vector<int>& inorder, int lowPre, int highPre, int lowIn, int highIn){
        if(lowPre > highPre || lowIn > highIn) return NULL;
        TreeNode *root;
        root = new TreeNode(preorder[lowPre]);
        int i = 0;
        for(; lowIn + i <= highIn; i++){
            if(inorder[lowIn + i] == root->val) break;
        }
        root->left = buildSubTree(preorder,inorder,lowPre + 1, lowPre+i,lowIn,lowIn+i-1);
        root->right = buildSubTree(preorder,inorder,lowPre+i+1,highPre,lowIn+i+1,highIn);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildSubTree(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};
