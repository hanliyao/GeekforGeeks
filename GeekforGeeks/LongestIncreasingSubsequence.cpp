/*
	��������
		�ҵ�һ����������ĵ���������
	�������
		����֪����ǰ������������Ԫ�ص�ʲô�������һ��Ԫ�ش���
		������������Ԫ�أ���ô�����������Ԫ�صĸ���+1
*/
#include<iostream>
#include<vector>
using namespace std;
/*
	D�������������
*/
void calc_LIS(vector<int> &D)
{
	vector<vector<int>> L(D.size());
	L[0].push_back(D[0]);//�����������ֻ��һ��Ԫ�أ���ô���Ԫ�ؾ���������������Ԫ��
	int i;
	for (i = 1; i < D.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if ((D[j] < D[i]) && ((L[i].size() < L[j].size() + 1)))//������ǰ�������������
				L[i] = L[j];
		}
		L[i].push_back(D[i]);
	}
	for (vector<int> x : L)
	{
		for (vector<int>::iterator it = x.begin(); it != x.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
void LIS()
{
	int a[] = {3,2,6,4,5,1};
	vector<int> arr(a, a + sizeof(a) / sizeof(a[0]));
	cout << "Data in" << endl;
	calc_LIS(arr);

}