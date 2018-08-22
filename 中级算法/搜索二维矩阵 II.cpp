//
//  搜索二维矩阵 II.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/22.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>

//从矩阵左下角开始遍历，若大于目标值，行数减1，小于目标值，列数加1
class Solution {
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row == 0) return false;
        int col = matrix[0].size();
        if(col == 0) return false;
        int i = row - 1;
        int j = 0;
        while(i >= 0 && j < col){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) i--;
            else j++;
        }
        return false;
    }
};
