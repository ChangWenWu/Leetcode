//
//  环形链表.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/26.
//

#include <stdio.h>
//设置快慢指针，快指针的遍历速度为慢指针的两倍，若链表中有环，则快指针必定会与慢指针相遇
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        while(p2 && p2->next){
            p1 = p1->next;
            p2 = p2->next->next;
            if(p1 == p2)return true;
        }
        return false;
    }
};
