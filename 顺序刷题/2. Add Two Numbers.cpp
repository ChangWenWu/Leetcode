//
//  2. Add Two Numbers.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/13.
//  Copyright © 2018 JarvisWu. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>

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
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode head(0);
        ListNode *p = &head;
        int extra = 0;
        while (l1 || l2 || extra) {
            int val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
            extra = val / 10;
            val = val % 10;
            p->next = new ListNode(val);
            p = p->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return head.next;
    }
};
