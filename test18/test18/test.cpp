//д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������ַ������Ȳ�����1000��
class Solution {
public:
	/**
	 * ��ת�ַ���
	 * @param str string�ַ���
	 * @return string�ַ���
	 */
	string solve(string str) {
		// write code here
		int n = str.size();
		if (0 == n)
			return NULL;
		for (int i = 0; i < n / 2; i++)
		{
			swap(str[i], str[n - 1 - i]);
		}
		return str;
	}
};