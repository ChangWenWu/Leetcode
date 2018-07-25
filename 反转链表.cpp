//
//  反转链表.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/25.
//

#include <stdio.h>

//迭代解法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = NULL, h = NULL;
        while(head){
            p = head->next;
            head->next = h;
            h = head;
            head = p;
        }
        return h;
    }
};

//递归解法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL)return head;
        ListNode* temp = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return h;
    }
};
