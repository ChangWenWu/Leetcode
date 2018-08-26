//
//  二叉树的序列化与反序列化.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/24.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>

//序列化：递归前序遍历二叉树
//反序列化：递归算法，使用index记录遍历字符串的位置，遇到#则为空节点（注意处理负数）
class Codec {
public:
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        preOrder(s, root);
        return s;
    }
    
    void preOrder(string& s, TreeNode* root){
        if(!root){
            s += "# ";
            return;
        }
        s += (to_string(root->val) + ' ');
        preOrder(s, root->left);
        preOrder(s, root->right);
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int index = 0;
        return deOrder(data, index);
    }
    
    TreeNode* deOrder(string data, int& index){
        if(data[index] == '#'){
            index += 2;
            return NULL;
        }
        
        int value = 0;
        bool bNgtv = false;
        while (data[index] != ' '){
            if(data[index] == '-') bNgtv = true;
            else value = value * 10 + (data[index] - '0');
            index++;
        }
        if(bNgtv) value = 0 - value;
        
        TreeNode* root = new TreeNode(value);
        
        index++;
        
        root->left = deOrder(data, index);
        root->right = deOrder(data, index);
        
        return root;
    }
    
    
};
