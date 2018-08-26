//
//  Excel表列序号.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/26.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//求26进制数
class Solution {
    public:
    int titleToNumber(string s) {
        int result = 0;
        int len = s.length();
        for(int i = 0; i < len; i++){
            int num = len - i - 1;
            result += (s[i] - 'A' + 1) * pow(26, num);
        }
        return result;
    }
};
