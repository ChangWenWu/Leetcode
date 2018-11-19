//
//  14. Longest Common Prefix.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/19.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
// 暴力检索
class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        string ret;
        if (strs.size() == 0)
            return ret;
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            bool isEqual = true;
            for (int j = 0; j < strs.size(); j++) {
                if (c != strs[j][i]) {
                    isEqual = false;
                    break;
                }
            }
            if (isEqual) {
                ret.push_back(c);
            } else {
                break;
            }
        }
        return ret;
    }
};
