//
//  20. Valid Parentheses.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/28.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>
#include <stack>

using namespace std;
// 使用栈存储字符
class Solution {
  public:
    bool isValid(string s) {
        stack<char> paren;
        for (char &c : s) {
            switch (c) {
            case '(':
            case '{':
            case '[':
                paren.push(c);
                break;
            case ')':
                if (paren.empty() || paren.top() != '(')
                    return false;
                else
                    paren.pop();
                break;
            case '}':
                if (paren.empty() || paren.top() != '{')
                    return false;
                else
                    paren.pop();
                break;
            case ']':
                if (paren.empty() || paren.top() != '[')
                    return false;
                else
                    paren.pop();
                break;
            default:; // pass
            }
        }
        return paren.empty();
    }
};
