//
//  10. Regular Expression Matching.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/16.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// 递归解法
class Solution {
  public:
    bool isMatch(string s, string p) {
        if (p.empty())
            return s.empty();
        if (p.size() > 1 && p[1] == '*')
            return (isMatch(s, p.substr(2)) ||
                    (!s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p)));
        else
            return (!s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1)));
    }
};
