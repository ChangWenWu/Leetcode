//
//  最长公共前缀.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/24.
//

#include <stdio.h>
//将初始字符串设为第一个字符串，依次去遍历匹配数组每一个字符串的最小前缀
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string result = strs[0];
        for(auto item : strs){
            int len = item.length();
            for(int i = 0; i < len; i++){
                if(i >= result.length() || result[i] != item[i]){
                    result = result.substr(0, i);
                    break;
                }
            }
            if(result.length() > len) result = item;
        }
        return result;
    }
};

