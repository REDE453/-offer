//��Ҷ�֪��쳲��������У�����Ҫ������һ������n��
//�������쳲��������еĵ�n���0��ʼ����0��Ϊ0����1����1����n <= 39
#include<iostream>
#include<Windows.h>
using namespace std;
//��̬�滮
class Solution {
public:
	int Fibonacci(int n) {

		int* f = new int[n + 1];
		f[0] = 0;
		//��ʼ��
		f[1] = f[2] = 1;
		//ת�Ʒ���
		for (int i = 3; i <= n; ++i)
		{
			f[i] = f[i - 1] + f[i - 2];
		}
		int ret = f[n];
		delete[]f;
		//����ֵ
		return ret;
	}
};
int main()
{
	Solution s;
	int n;
	while (cin >> n)
	{
		cout << s.Fibonacci(n) << endl;
	}
	system("pause");
	return 0;
}