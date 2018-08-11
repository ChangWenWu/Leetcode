//
//  相交链表.cpp
//  RxSwiftPlayground
//
//  Created by Jarvis Wu on 2018/8/11.
//  Copyright © 2018年 Scott Gardner. All rights reserved.
//

#include <stdio.h>
//双指针解法，pA从链表A头部开始遍历，pB从链表B头部开始遍历，pA到达尾部时将其指向链表B头部，pB到达尾部时指向链表A头部，pA和pB相遇时即为相交节点
class Solution {
    public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA = headA;
        ListNode *pB = headB;
        if(!pA || !pB) return NULL;
        while(pA != pB){
            if(!pA) pA = headB;
            else pA = pA->next;
            if(!pB) pB = headA;
            else pB = pB->next;
        }
        return pA;
    }
};
