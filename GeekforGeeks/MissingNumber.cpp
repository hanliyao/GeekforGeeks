#include<iostream>
using namespace std;
/*
	 �ҵ�0-n-1��ȱʧ������
*/
int MissingNumber(int a[], int n)
{
	int i, total=0,sum=0;
	total = (n+2)*(n + 1) / 2;
	for (i = 0; i < n; i++)
		sum = sum + a[i];
	return total - sum;
}
/*
	�����������������ⲻ���ڵ�Ԫ��
*/
int getMissingNo(int a[], int n)
{
	int i;
	int x1 = a[0];
	int x2 = 1;
	for (i = 1; i < n; i++)
		x1 = x1 ^ a[i];
	for (i = 2; i <= n + 1; i++)
		x2 = x2 ^ i;
	return (x1 ^ x2);
}
int MissingNo()
{
	int a[] = { 1,2,4,5,6 };
	int miss = getMissingNo(a, 5);
	cout << miss << endl;
	return 0;
}