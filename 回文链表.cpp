//
//  回文链表.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/26.
//

#include <stdio.h>

class Solution {
public:
    ListNode* getMiddle(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head){
        ListNode* pre = NULL;
        ListNode* p = head;
        while(head){
            p = head;
            head = head->next;
            p->next = pre;
            pre = p;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* middle = getMiddle(head);
        ListNode* reverse = reverseList(middle);
        while(head != middle){
            if(head->val != reverse->val)return false;
            head = head->next;
            reverse = reverse->next;
        }
        return true;
    }
};
