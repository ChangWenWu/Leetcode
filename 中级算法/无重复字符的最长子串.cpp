//
//  无重复字符的最长子串.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/8.
//

#include <stdio.h>

//使用hash表建立字符到上一次出现的下标之间的映射，遍历字符串时在hash表中查找字符，若遇到没有出现过的字符，加入hash表中并更新最大子串的长度，若遇到出现过的字符，回退到上一次出现的重复字符，并清空hash表
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int maxlen = 0;
        unordered_map<char, int> m;
        for(int i = 0; i < len; i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = i;
                if(m.size() > maxlen) maxlen = m.size();
            }else{
                i = m[s[i]];
                m.clear();
            }
        }
        return maxlen;
    }
};
