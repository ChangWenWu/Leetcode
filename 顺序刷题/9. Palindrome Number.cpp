//
//  9. Palindrome Number.cpp
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
// 转化为回文字符串，效率较低
class Solution {
  public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0, j = (int) s.size() - 1;
        while (i <= j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

// 数字倒置，效率最高
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x != 0 && x % 10 == 0)) return false;
        int sum = 0;
        while(sum < x){
            sum = sum * 10 + x % 10;
            x = x/10;
        }
        return x == sum || (x == sum / 10);
    }
};
