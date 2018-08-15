//
//  删除链表中的节点.cpp
//  Leetcode
//
//  Created by jarvis on 2018/7/25.
//

#include <stdio.h>

//将被删除的节点的值变为下一个节点，然后删除其下一个节点即可
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
