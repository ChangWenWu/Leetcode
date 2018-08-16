//
//  单词搜索.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/16.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//遍历矩阵，对每个数字深度优先搜索，对搜索过的节点标记，到达深度为字符串长度的节点（叶子节点）时匹配成功
class Solution {
    public:
    bool DFS(vector<vector<char>>& board, vector<vector<bool>>& flag, string word, int i, int j, int depth){
        if(depth == word.length())return true;
        if(i >= board.size() || j >= board[0].size() || i < 0 || j < 0)return false;
        if(flag[i][j])return false;
        if(board[i][j] != word[depth]) return false;
        flag[i][j] = true;
        bool ret =
        DFS(board,flag,word,i+1,j,depth+1)||
        DFS(board,flag,word,i-1,j,depth+1)||
        DFS(board,flag,word,i,j+1,depth+1)||
        DFS(board,flag,word,i,j-1,depth+1);
        flag[i][j] = false;
        return ret;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        if(row == 0)return false;
        int col = board[0].size();
        vector<vector<bool> > flag(row,vector<bool>(col,false));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(DFS(board,flag,word,i,j,0))return true;
            }
        }
        return false;
    }
};
