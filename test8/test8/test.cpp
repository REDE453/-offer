//����һ���������������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
#include<iostream>
#include<Windows.h>
using namespace std;
class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		int a = n;
		while (a != 0)
		{
			a &= a - 1;
			++count;
		}
		return count;
	}
};