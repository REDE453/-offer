//��Ŀ����
//��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int row = array.size();
		int col = array[0].size();
		//���½��±�
		int i = row - 1, j = col;
		while (i >= 0 && j < col)
		{
			//targetС�����½ǵ������ϲ���
			if (target < array[i][j])
				--i;
			//target�������½ǵ������Ҳ���
			else if (target > array[i][j])
				++j;
			else
				return true;
		}
		return false;
	}
};