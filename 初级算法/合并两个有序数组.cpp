//
//  合并两个有序数组.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/28.
//

#include <stdio.h>

//数组2的元素复制进数组1中，然后插入排序
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m; i < m + n; i++){
            nums1[i] = nums2[i- m];
        }
        for(int i = m; i < m + n; i++){
            int j = i;
            while(j > 0 && nums1[j] < nums1[j - 1]){
                int t = nums1[j];
                nums1[j] = nums1[j - 1];
                nums1[ j - 1] = t;
                j--;
            }
        }
    }
};

