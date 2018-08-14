//
//  岛屿的个数.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/14.
//

#include <stdio.h>

//遍历二维数组，对遍历到的1计数之后使用递归算法将其连通的1变为0
class Solution {
public:
    void BFS(vector<vector<char>>& grid, int row, int col){
        if(row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size()) return;
        if(grid[row][col] == '1'){
            grid[row][col] = '0';
            BFS(grid,row+1,col);
            BFS(grid,row-1,col);
            BFS(grid,row,col+1);
            BFS(grid,row,col-1);
        }
        return;
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    count++;
                    BFS(grid,i,j);
                }
            }
        }
        return count;
    }
};
