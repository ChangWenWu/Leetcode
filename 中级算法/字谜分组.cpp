//
//  字谜分组.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/8.
//

#include <stdio.h>

//使用一个hash表存储已经排序的串与结果矩阵的行之间的映射，遍历输入的数组，将item排序后在hash表中查找，若找到则加入结果矩阵中，若未找到则在矩阵中新增一行并更新hash表
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, int> m;
        for(auto item:strs){
            string s = item;
            sort(s.begin(), s.end());
            if(m.find(s) == m.end()){
                vector<string> v;
                v.push_back(item);
                result.push_back(v);
                m[s] = result.size() - 1;
            }else{
                result[m[s]].push_back(item);
            }
        }
        return result;
    }
};
