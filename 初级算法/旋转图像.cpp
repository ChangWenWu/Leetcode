//
//  旋转图像.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/20.
//

#include <stdio.h>

//使用递归思想分解问题，使用layer标记层数，先将最外层的数字旋转完成，layer+1，调用递归函数进入下一层矩阵，直到最中心的矩阵
class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix, int layer){
        int len = matrix.size();
        if(layer >= (len/2)) return;
        for(int i = 0; i < len - (layer * 2) - 1; i++){
            swap(matrix[layer][layer + i], matrix[layer + i][len - layer - 1]);
            swap(matrix[layer][layer + i], matrix[len - layer - 1][len - layer - i - 1]);
            swap(matrix[layer][layer + i], matrix[len - layer - i - 1][layer]);
        }
        rotateMatrix(matrix, ++layer);
    }
    
    void rotate(vector<vector<int>>& matrix) {
        rotateMatrix(matrix,0);
    }
};
