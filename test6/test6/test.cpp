//��Ŀ����
//���������Ķ�����������任ΪԴ�������ľ���
//�������� :
//�������ľ����壺Դ������
//8
/// \
//6   10
/// \ / \
//5  7 9 11
//���������
//8
/// \
//10   6
/// \ / \
//11 9 7  5
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
}; */
class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == nullptr)
			return;
		TreeNode* temp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = temp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};