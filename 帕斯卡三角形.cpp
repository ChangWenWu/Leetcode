//
//  帕斯卡三角形.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/3.
//

#include <stdio.h>

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 1; i <= numRows; i++){
            vector<int> t;
            for(int j = 0; j < i; j++){
                if(j == 0 || j == i - 1){
                    t.push_back(1);
                    continue;
                }
                t.push_back(result[i - 2][j - 1] + result[i - 2][j]);
            }
            result.push_back(t);
        }
        return result;
    }
};
