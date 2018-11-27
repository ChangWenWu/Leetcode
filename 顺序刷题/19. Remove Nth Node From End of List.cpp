//
//  19. Remove Nth Node From End of List.cpp
//  Leetcode
//
//  Created by jarvis on 2018/11/27.
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
     ListNode(int x) : val(x), next(NULL) {}
};
// 双指针解法
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front = head;
        ListNode* back = head;
        for(int i = 0; i < n; i++){
            if(!back) return head;
            back = back->next;
        }
        if(!back) return head->next;
        while(back->next){
            front = front->next;
            back = back->next;
        }
        front->next = front->next->next;
        return head;
    }
};
