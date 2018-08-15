//
//  生成括号.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/14.
//

#include <stdio.h>

//递归解法，记录剩余左括号与右括号的个数，若递归时剩余右括号的个数大于左括号则不合法
class Solution {
public:
    void generate(vector<string>& result, int left, int left, int right, string s) {
        if(left == 0 && right == 0){
            result.push_back(s);
            return;
        }
        if(left > 0){
            generate(result, left - 1, right, s+'(');
        }
        if(right > 0 && right > left){
            generate(result, left, right - 1, s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s;
        generate(result, n, n, "");
        return result;
    }
};
