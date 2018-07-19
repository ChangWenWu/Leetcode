//
//  两个数组的交集 II.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/19.
//

#include <stdio.h>

//将元素个数较少的数组中的元素为key，个数为value存入hashmap中，遍历另一个数组，匹配hashmap中的key，相同则将该元素存入result数组，且对应的value减1
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int len1 = nums1.size();
        int len2 = nums2.size();
        if(len1 == 0 || len2 == 0) return res;
        vector<int> *large = NULL;
        vector<int> *small = NULL;
        if(len1 >= len2){
            large = &nums1;
            small = &nums2;
        } else{
            large = &nums2;
            small = &nums1;
        }
        unordered_map<int,int> m;
        for (auto it : *small){
            if(m.find(it) != m.end()){
                m[it]++;
            }else{
                m[it] = 1;
            }
        }
        for (auto it : *large){
            if(m.find(it) != m.end() && m[it] > 0){
                res.push_back(it);
                m[it]--;
            }
        }
        return res;
    }
};
