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
void calc_LIS(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void main()
{
	int a[] = {3,2,6,4,5,1};
	calc_LIS(a,6);
}