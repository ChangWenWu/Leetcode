//
//  17. Letter Combinations of a Phone Number.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/27.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
// 迭代解法
class Solution {
  public:
    vector<string> letterCombinations(string digits) {
        static const vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ret;
        if (digits.size() == 0)
            return ret;
        ret.push_back("");
        for (int i = 0; i < digits.size(); i++) {
            string s = v[digits[i] - '0'];
            vector<string> tmp;
            for (int j = 0; j < s.size(); j++) {
                for (int k = 0; k < ret.size(); k++) {
                    tmp.push_back(ret[k] + s[j]);
                }
            }
            ret.swap(tmp);
        }
        return ret;
    }
};
