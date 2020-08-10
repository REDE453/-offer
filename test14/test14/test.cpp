//�������������ͷָ���һ��Ҫɾ���Ľڵ��ֵ������һ������ɾ���ýڵ㡣
//����ɾ����������ͷ�ڵ㡣
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		if (head == NULL)
			return head;
		ListNode* cur = head;
		ListNode* pre = NULL;
		//�жϵ�һ��λ��
		if (cur->val == val)
			return head->next;
		//ѭ���ж��м�λ�ú����һ��λ��
		while (cur->val != val)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = pre->next->next;
		return head;
	}
};