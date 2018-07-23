//
//  字符串中的第一个唯一字符.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/23.
//

#include <stdio.h>

//以字符为key，下标为value构建hashmap，再次遍历字符串，重复的元素更新值为-1
class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        unordered_map<char,int> m;
        for(int i = 0; i < len; i++){
            m[s[i]] = i;
        }
        for(int i = 0; i < len; i++){
            if(m[s[i]] == i){
                return i;
            }else{
                m[s[i]] = -1;
            }
        }
        return -1;
    }
};
