//
//  22. Generate Parentheses.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/29.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
// 递归法回溯
class Solution {
  public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        generateParenthesis(n, 0, "", ret);
        return ret;
    }

    void generateParenthesis(int n, int m, string s, vector<string> &ret) {
        if (n == 0 && m == 0) {
            ret.push_back(s);
        }
        if (n > 0)
            generateParenthesis(n - 1, m + 1, s + '(', ret);
        if (m > 0)
            generateParenthesis(n, m - 1, s + ')', ret);

        return;
    }
};
