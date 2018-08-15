//
//  有效的数独.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/20.
//

#include <stdio.h>

//初始化3个9*9的bool数组，分别对应行，列，块，若第i行存在数字a，则row[i][a]为true，否则为false，判定每一个数组元素后标记为true，第二次标记为true时说明数独不合法
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int cnt = 9;
        bool row[cnt][cnt] = {false};
        bool line[cnt][cnt] = {false};
        bool area[cnt][cnt] = {false};
        
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < cnt; j++){
                if (isdigit(board[i][j])){
                    int t = board[i][j] - '1';
                    int a = (i/3) * 3 + (j/3);
                    if(row[i][t] || line[j][t] || area[a][t]){
                        return false;
                    }
                    row[i][t] = true;
                    line[j][t] = true;
                    area[a][t] = true;
                }
            }
        }
        return true;
    }
};
