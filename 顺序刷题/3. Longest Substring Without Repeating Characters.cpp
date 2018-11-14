
//
//  3. Longest Substring Without Repeating Characters.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/14.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0;
        unordered_map<char, int> m;
        for (int right = 0; right < s.size(); right++) {
            if (m.find(s[right]) != m.end()) {
                left = max(left, m[s[right]] + 1);
            }
            maxLen = max(maxLen, right - left + 1);
            m[s[right]] = right;
        }
        return maxLen;
    }
};
