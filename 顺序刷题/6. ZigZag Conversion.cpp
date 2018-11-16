//
//  6. ZigZag Conversion.cpp
//  Leetcode
//
//  Created by Jarvis Wu on 2018/11/15.
//  Copyright © 2018年 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
  public:
    string convert(string s, int numRows) {
        string result = "";
        if (numRows == 1)
            return s;
        int count = (int) s.size();
        int offset = 2 * numRows - 2; // 偏移量
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < count; j += offset) {
                // 先打印出竖直列的数字，再打印该竖直列的下一个斜列的数字（如果存在的话）
                result.push_back(s[j]);
                if (i != 0 && i != numRows - 1 && j + offset - 2 * i < count) {
                    result.push_back(s[j + offset - 2 * i]);
                }
            }
        }
        return result;
    }
};
