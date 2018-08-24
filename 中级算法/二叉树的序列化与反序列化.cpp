//
//  二叉树的序列化与反序列化.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/24.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>

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
        while (data[index] != ' '){
            value = value * 10 + (data[index] - '0');
            index++;
        }
        
        TreeNode* root = new TreeNode(value);
        
        index++;
        
        root->left = deOrder(data, index);
        root->right = deOrder(data, index);
        
        return root;
    }
    
    
};
