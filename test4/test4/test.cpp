//����һ�ö����������������ȡ�
//�Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�
//��������ķ�ʽ
//���ڵ�����=max(����������ȣ�����������ȣ�+1
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int LeftDepth = TreeDepth(pRoot->left);
		int RightDepth = TreeDepth(pRoot->right);
		return LeftDepth > RightDepth ? LeftDepth + 1 : RightDepth + 1;
	}
};