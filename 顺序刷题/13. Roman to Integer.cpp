//
//  13. Roman to Integer.cpp
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

class Solution {
  public:
    int romanToInt(string s) {
        unordered_map<char, int> T = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int sum = T[s.back()];
        for (int i = s.length() - 2; i >= 0; --i) {
            if (T[s[i]] < T[s[i + 1]]) {
                sum -= T[s[i]];
            } else {
                sum += T[s[i]];
            }
        }

        return sum;
    }
};
