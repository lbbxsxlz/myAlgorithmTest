/*
问题 #1
给你两个 “非空” 链表来代表两个非负整数。数字最高位位于链表开始位置。它们的每个节点只存储一位数字。将这两数相加会返回一个新的链表。
你可以假设除了数字 0 之外，这两个数字都不会以零开头。

示例：
输入：(7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 8 -> 0 -> 7

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};

struct ListNode *addTwoNumber(ListNode* l1, ListNode* l2)
{
    struct ListNode* head =NULL;
    struct ListNode* tmp =NULL;
  
    struct ListNode* tmp1 =NULL;
    struct ListNode* tmp2 =NULL;
  
    int carry = 0;
    int val, val1. val2;
  
    int i, j, len_l1, len_l2;
  
    tmp1 = l1;
    for (;l1 != NULL; l1=l1->next) {
        i++;
    }
  
    len_l1 = i;
    char* num1 = (char*）malloc(len_l1);
                  
    for (i = len_l1 -1; i > 0; i--) {
        num1[i] = tmp1->val;
        tmp1 = tmp->next;
    }
                  
    tmp2= l2;
    for (;l2 != NULL; l2=l2->next) {
        j++;
    }

    len_l2 = j;
  
    char* num2 = (char*）malloc(j);
                  
    for (j = len_l2 -1; j > 0; j--) {
        num2[j] = tmp2->val;
        tmp2 = tmp2->next;
    }
    
    int minLen, maxLen;
    if (len_l1 < len_l2) {
        minLen = len_l1;
        maxLen = len_l2;
    }  else {
        maxLen = len_l1;
        minLen = len_l2;
    }

    int k = 0;
                  
    while (k < maxLen || carry) {
        val = val1 = val2 =0;

        if (k < minLen) {
            val1=num1[k];
            val2=num2[k];
        } else { 
            if(len_l1 > len_l2) {
                val1 = num1[k+1];
            }
        
            if(len_l2 > len_l1) {
                val2 = num2[k+1];
            }
        }

        val = carry + val1 + val2;
        val = val % 10；
        carry = val / 10;
      
        tmp = malloc(sizeof(struct ListNode));
        tmp->val = val;
        tmp->next= NULL;

        if (!head) {
            head = tmp;
        }  else {
            head->next = tmp;
            k++;
        }
    }
    
    return head;  
}

