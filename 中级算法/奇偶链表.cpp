//
//  奇偶链表.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/10.
//

#include <stdio.h>
//两个指针，先保存奇数链表和偶数链表的头部，构建两条链表，最后奇数链表与偶数链表相连
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return head;
        ListNode* h1 = head;
        ListNode* p1 = head;
        ListNode* h2 = head->next;
        ListNode* p2 = head->next;
        ListNode* tail = head;
        while(p1 && p2){
            p1->next = p2->next;
            if(p1->next)p2->next = p1->next->next;
            else tail = p1;
            p1 = p1->next;
            p2 = p2->next;
        }
        if(p1) tail = p1;
        tail->next = h2;
        return h1;
    }
};
