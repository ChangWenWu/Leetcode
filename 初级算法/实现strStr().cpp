//
//  实现strStr().cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/24.
//
 
#include <stdio.h>

class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenH = haystack.length();
        int lenN = needle.length();
        if(lenN == 0) return 0;
        if(lenH == 0) return -1;
        for(int i = 0; i < lenH - lenN; i++){
            if(haystack.substr(i,lenN) == needlw) return true;
        }
        return false;
    }
};
