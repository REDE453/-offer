//����һ�ö��������жϸö������Ƿ���ƽ���������
//���������ֻ��Ҫ������ƽ���ԣ�����Ҫ�������ǲ������������
class Solution {
public:
	int Depth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int leftDepth = Depth(pRoot->left);
		int rightDepth = Depth(pRoot->right);
		return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == nullptr)
			return true;
		int leftDepth = Depth(pRoot->left);
		int rightDepth = Depth(pRoot->right);
		//�жϵ�ǰ��
		return abs(leftDepth - rightDepth) < 2
			//�ݹ��ж���������������
			&& IsBalanced_Solution(pRoot->left)
			&& IsBalanced_Solution(pRoot->right);
	}
};