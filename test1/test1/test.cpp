//��1 + 2 + 3 + ... + n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����
//�ٷ������Ĵ������˹�ʽ��ͣ�ѭ�����͵ݹ����治���õ�ȫ���ˣ��о��Լ����̱������ˡ�
#include<iostream>
#include<Windows.h>
using namespace std;
class Sum
{
public:
	Sum()
	{
		_sum += _i;
		++_i;
	}
	//��ʼ��
	static void Init()
	{
		_i = 1;
		_sum = 0;
	}
	static int Getsum()
	{
		return _sum;
	}
private:
	//Ҳ���Զ���ȫ�ֱ���������Ϊ������c++�ķ�װ��
	static int _i;
	static int _sum;
};
int Sum::_i = 1;
int Sum::_sum = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		//Sum a[n];
		//��̬����n���������n�ι��캯��
		Sum::Init();
		Sum* p = new Sum[n];
		delete[] p;
		return Sum::Getsum();
	}
};
int main()
{
	Solution st;
	//���˳�ʼ��oj��5����һֱ����ͨ��
	cout << st.Sum_Solution(5) << endl;
	system("pause");
	return 0;
}