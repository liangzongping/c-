#include<stdio.h>
#include<stdlib.h>

 
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* cur = head, * p = NULL;
    while (cur)
    {
        if (cur->val == val)
        {
            if (cur == head)
            {
                head = cur->next;
                free(cur);
                cur = head;
            }
            else
            {
                p->next = cur->next;
                free(cur);
                cur = p->next;
            }

        }
        else
        {
            p = cur;
            cur = cur->next;
        }
    }
    return head;
}


int main()
{
	struct ListNode*n1=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode*n2= (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode*n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode*n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val  = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val= 7;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
    struct ListNode* head =  removeElements(n1, 7);
    return 0;
}