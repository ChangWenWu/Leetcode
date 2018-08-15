//
//  删除链表的倒数第N个节点.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/25.
//

#include <stdio.h>

//设置间隔为N的双指针遍历至链表尾部，删除位置靠前的指针的下一个，需考虑删除头节点的特殊情况
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front= head;
        ListNode* back = head;
        for(int i = 1; i <= n; i++){
            back = back->next;
        }
        while(back != NULL && back->next != NULL){
            back = back->next;
            front = front->next;
        }
        if(front == head && back == NULL){
            head = head->next;
        }else{
            front->next = front->next->next;
        }
        return head;
    }
};
