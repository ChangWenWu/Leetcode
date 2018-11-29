//
//  24. Swap Nodes in Pairs.cpp
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
    ListNode *swapPairs(ListNode *head) {
        if (!head)
            return NULL;
        if (!head->next)
            return head;
        ListNode *back = head->next;
        head->next = swapPairs(back->next);
        back->next = head;
        return back;
    }
};
