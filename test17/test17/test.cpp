//���������������ϲ�Ϊһ��������Ҫ���µ�������ͨ��ƴ����������Ľڵ������ɵġ�
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
	/**
	 *
	 * @param l1 ListNode��
	 * @param l2 ListNode��
	 * @return ListNode��
	 */
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		// write code here
		if (!l1)
			return l2;
		else if (!l2)
			return l1;
		else if (l1->val < l2->val)
		{
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		else {
			l2->next = mergeTwoLists(l2->next, l1);
			return l2;
		}
	}
};