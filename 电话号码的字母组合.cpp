//
//  电话号码的字母组合.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/18.
//

#include <stdio.h>

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string NtoC[10] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ivec;
        if(digits.empty())return ivec;
        ivec.push_back("");
        for(int i = 0; i < digits.length(); i++){
            string s = NtoC[digits[i] - '2'];
            int len = ivec.size();
            for(int j = 0; j < len; j++){
                string head = ivec.front();
                ivec.erase(ivec.begin());
                for(int k = 0; k < s.length(); k++){
                    ivec.push_back(head + s[k]);
                }
            }
        }
        return ivec;
    }
};
