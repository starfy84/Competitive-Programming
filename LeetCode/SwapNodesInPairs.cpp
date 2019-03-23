#include <bits/stdc++.h>
using namespace std;

ListNode* swapPairs(ListNode* head) {
	if (head && head->next) {
		ListNode *first = head;
		head = first->next;

		first->next = swapPairs(first->next->next);
		head->next = first;
	}
	return head;
}