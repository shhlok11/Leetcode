1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        ListNode* dummy = new ListNode(0);
5        ListNode* cur = dummy;
6
7        while (list1 && list2) {
8            if (list1->val > list2->val) {
9                cur->next = list2;
10                list2 = list2->next;
11            } else {
12                cur->next = list1;
13                list1 = list1->next;
14            }
15            cur = cur->next;
16        }
17
18        cur->next = list1 ? list1 : list2;
19
20        ListNode* head = dummy->next;
21        delete dummy;
22        return head;        
23    }
24};