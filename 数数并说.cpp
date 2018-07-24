//
//  数数并说.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/24.
//

#include <stdio.h>
//初始字符串为“1”，分别计算每个数字连续出现的次数，将连续出现的数字替换为“次数”+“该数字”的形式，重复n - 1次
class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        for(int i = 1; i < n; i++){
            int k = 1;
            for(int j = 0; j < result.length();){
                int count = 1;//重置count
                int flag = j;//使用flag保存起始位置
                int len = result.length();
                while(j + 1 < len && result[j] == result[j + 1]){
                    count++;
                    j++;
                }
                string t = to_string(count);
                t.push_back(result[flag]);
                result.replace(flag, count, t);
                j = flag + t.length();
            }
        }
        return result;
    }
};
