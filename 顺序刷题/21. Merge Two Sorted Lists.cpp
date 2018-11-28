//
//  21. Merge Two Sorted Lists.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/28.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x)
        : val(x)
        , next(NULL) {}
};
// 递归解法
class Solution {
  public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (!l1 && !l2)
            return NULL;
        if (l1 && !l2)
            return l1;
        if (!l1 && l2)
            return l2;
        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};
