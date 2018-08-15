//
//  最小栈.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/1.
//

#include <stdio.h>

//使用两个栈，一个存储输入的元素，另一个存储曾经出现过的最小值，当栈1的最小元素被弹出时，栈2也做弹栈操作
class MinStack {
public:
    
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= s2.top()) s2.push(x);
    }
    
    void pop() {
        if(s1.top() == s2.top()) s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
private:
    stack<int> s1; //real stack store the data
    stack<int> s2; //minimal number stack store the number
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
