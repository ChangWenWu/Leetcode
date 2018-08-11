//
//  中序遍历二叉树.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/11.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//使用迭代算法，需要一个栈来保存遍历的根节点
class Solution {
    public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(!root)return result;
        stack<TreeNode*> s;
        TreeNode *t = root;
        while(!s.empty() || t){
            while(t){
                s.push(t);
                t = t->left;
            }
            t = s.top();
            result.push_back(t->val);
            s.pop();
            t = t->right;
        }
        return result;
    }
};
