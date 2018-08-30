//
//  Task Scheduler.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/30.
//

#include <stdio.h>
//计算出字符出现次数，存入数组，排序，计算（最大数字出现次数 - 1 ）乘以 （时间间隔 + 1） 加上 出现次数最多的字符个数 ，最后取结果与数组大小的较大值
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26, 0);
        for(auto item: tasks){
            count[item - 'A']++;
        }
        sort(count.begin(), count.end());
        int i = 25;
        int maxCount = count[25];
        int len = tasks.size();
        while(i >= 0 && count[i] == maxCount) i--;
        return max(len, (maxCount - 1) * (n + 1) + 25 - i);
    }
};
