//
//  两数相加.cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/10.
//

#include <stdio.h>
//使用p1和p2两个指针进行遍历，将p1的值与p2的值相加，若大于等于10，p1的下一个节点的值加一，若p1或p2已经移动到链表尾部，构建值为0节点的节点补全
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int result = 0;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while(p1->next || p2->next){
            if(!p1->next){
                ListNode* t = new ListNode(0);
                p1->next = t;
            }
            if(!p2->next){
                ListNode* t = new ListNode(0);
                p2->next = t;
            }
            int a = p1->val + p2->val;
            if(a >= 10){
                p1->val = a - 10;
                p1->next->val++;
            }else{
                p1->val = p1->val + p2->val;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        
        p1->val = p1->val + p2->val;
        if(p1->val >= 10){
            ListNode* t = new ListNode(1);
            p1->val = p1->val - 10;
            p1->next = t;
        }
        return l1;
    }
};
