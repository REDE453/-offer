//����һ����������������е�����k���ڵ㡣
//Ϊ�˷��ϴ�����˵�ϰ�ߣ������1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣
//���磬һ��������6���ڵ㣬��ͷ�ڵ㿪ʼ�����ǵ�ֵ������1��2��3��4��5��6���������ĵ�����3���ڵ���ֵΪ4�Ľڵ㡣
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
	ListNode* getKthFromEnd(ListNode* head, int k) {
		ListNode* fast = head;
		ListNode* slow = head;
		//��ָ������k��
		for (int i = 0; i < k; ++i)
		{
			fast = fast->next;
		}
		//����ָ��һ���ߣ���ָ����n-k;
		//��ָ�뵽nullptrʱ��ָ�뵽k
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};