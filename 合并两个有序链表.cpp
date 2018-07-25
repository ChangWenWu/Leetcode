//
//  合并两个有序链表.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/25.
//

#include <stdio.h>

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;
        ListNode *p1 = NULL, *p2 = NULL, *head = NULL,*nail = NULL;
        if(l1->val >= l2->val){
            head = l2;
            l2 = l2->next;
        }else{
            head = l1;
            l1 = l1->next;
        }
        nail = head;
        while(l1 && l2){
            if(l1->val >= l2->val){
                nail->next = l2;
                l2 = l2->next;
            }else{
                nail->next = l1;
                l1 = l1->next;
            }
        }
        if(l1)nail->next = l1;
        if(l2)nail->next = l2;
        return head;
    }
};
