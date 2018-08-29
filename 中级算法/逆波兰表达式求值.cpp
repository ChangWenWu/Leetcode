//
//  逆波兰表达式求值.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/29.
//

#include <stdio.h>
//遍历数组，使用栈存储遇到的数字，若遇到运算符，弹栈两次，计算两数结果，把结果压栈
class Solution {
public:
    long value;
    
    bool isOp(string &op) {
        return (op=="+" || op=="-" || op=="*" || op=="/");
    }
    
    bool isNum(string &num) {
        char *end;
        value = strtol(num.c_str(), &end, 10);
        if (end == num.c_str() || *end != '\0' || errno == ERANGE){
            return false;
        }
        return true;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        if(tokens.size() == 0) return 0;
        for(auto item : tokens){
            if(isNum(item)){
                s.push(value);
            }else if(isOp(item)){
                if(s.size() < 2) return 0;
                int second = s.top();
                s.pop();
                int first = s.top();
                s.pop();
                
                int value;
                if (item=="+"){
                    value = first + second;
                }else if (item=="-"){
                    value = first - second;
                }else if (item=="*"){
                    value = first * second;
                }else if (item=="/"){
                    value = first / second;
                }
                s.push(value);
            }else{
                return 0;
            }
        }
        return s.top();
        
    }
};
