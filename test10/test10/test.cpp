//���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
//����ѹ��ջ���������־�����ȡ���������1, 2, 3, 4, 5��ĳջ��ѹ��˳������4, 5, 3, 2, 1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
//��4, 3, 5, 1, 2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.size() == 0)
			return false;
		stack <int>s;
		int j = 0;
		for (int i = 0; i < pushV.size(); ++i)
		{
			s.push(pushV[i]);
			while (!s.empty() && s.top() == popV[j])
			{
				s.pop();
				++j;
			}
		}
		if (s.empty())
			return true;
		return false;
	}
};