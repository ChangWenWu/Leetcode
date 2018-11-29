//
//  23. Merge k Sorted Lists.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/29.
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

class Solution {
  public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.size() == 0)
            return NULL;
        while (lists.size() > 1) {
            lists.push_back(merge2Lists(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }

    ListNode *merge2Lists(ListNode *l1, ListNode *l2) {
        if (!l1 && !l2)
            return NULL;
        if (l1 && !l2)
            return l1;
        if (!l1 && l2)
            return l2;
        if (l1->val <= l2->val) {
            l1->next = merge2Lists(l1->next, l2);
            return l1;
        } else {
            l2->next = merge2Lists(l1, l2->next);
            return l2;
        }
    }
};
