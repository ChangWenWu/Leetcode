//
//  矩阵置零.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/7.
//

#include <stdio.h>

//设置两个布尔值，分别记录第一行与第一列是否存在0，遍历2次矩阵，若matirx[i][j]为0，将其所在的行和列的第一个元素标记为0，第二次遍历矩阵，若matirx[i][j]所在的行和列的第一个元素为0，将其标记为0，最后判断首行和首列若存在0，标记行和列的元素为0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //判断第一行，第一列是否存在0
        bool bRow = false, bCol = false;
        int m = matrix.size();
        if(m == 0) return;
        int n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    if(i == 0) bRow = true;
                    if(j == 0) bCol = true;
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        
        for(int i = 0; bCol && i < m; i++) matrix[i][0] = 0;
        for(int i = 0; bRow && i < n; i++) matrix[0][i] = 0;
    }
};
