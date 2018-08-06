//
//  有效的括号.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/6.
//

#include <stdio.h>

//使用栈存储字符，遇到左括号压栈，右括号弹栈
class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack<char> st;
        unordered_map<char,char> m = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };
        for(int i = 0; i < len; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }else{
                if(st.empty() || st.top() != m[s[i]]) return false;
                st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
