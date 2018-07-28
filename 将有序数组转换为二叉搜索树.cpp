//
//  将有序数组转换为二叉搜索树.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/28.
//

#include <stdio.h>

//递归思想分解问题
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums , int low, int high) {
        if(low > high) return NULL;
        int mid = (low + high) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBST(nums, low, mid - 1);
        root->right = sortedArrayToBST(nums, mid + 1, high);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};
