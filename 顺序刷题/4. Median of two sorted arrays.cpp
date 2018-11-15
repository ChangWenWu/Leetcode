//
//  4.Median of two sorted arrays.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/13.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;
// 递归+二分解法，先将问题分解为求联合数组中下标为(m + n + 1) / 2 与 (m + n + 2) /
// 2的平均值（对奇偶都适用），定义求两个数组中第K个数的函数
class Solution {
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int m = (int) nums1.size(), n = (int) nums2.size(), left = (m + n + 1) / 2, right = (m + n + 2) / 2;
        return (findKth(nums1, 0, nums2, 0, left) + findKth(nums1, 0, nums2, 0, right)) / 2.0;
    }

    double findKth(vector<int> &nums1, int i, vector<int> &nums2, int j, int k) {
        // 起始值大于数组大小则代表该数组已经遍历完，返回另一个数组中第K个数即可
        if (i >= nums1.size())
            return nums2[j + k - 1];
        if (j >= nums2.size())
            return nums1[i + k - 1];
        // k为1时直接返回两数组首部较小值
        if (k == 1)
            return min(nums1[i], nums2[j]);

        // 将k二分，超出数组范围则定义为无穷大
        double k1 = (k / 2 + i - 1) < nums1.size() ? nums1[k / 2 + i - 1] : INT_MAX;
        double k2 = (k / 2 + j - 1) < nums2.size() ? nums2[k / 2 + j - 1] : INT_MAX;
        // 在对应数组（第k/2个数较小）中舍弃目标值不在的大小为k / 2的区间，查找区间后移k / 2位
        if(k1 < k2){
            return findKth(nums1, i + k / 2, nums2, j, k - k / 2);
        } else {
            return findKth(nums1, i, nums2, j + k / 2, k - k / 2);
        }
    }
};
