#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
/*
	��������
	����һ������A[]���ҳ������е�����Ԫ��,ʹ������ӵĺ�Ϊx
*/
int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int *)b);
}
int hasArrayTwoCandidates(int A[], int ar_size, int sum)
{
	qsort(A, ar_size, sizeof(int), compare);//��������
	int left = 0, right = ar_size - 1;
	while (left < right)
	{
		if (A[left] + A[right] < sum)
		{
			left++;
		}
		else if (A[left] + A[right] > sum)
		{
			right--;
		}
		else
		{
			return 1;//��ʾ����
		}
	}
	return 0;//��ʾ������
}
void PairInArray()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand();
		cout << a[i] << " ";
	}
	cout << endl;
	if (hasArrayTwoCandidates(a, 10, a[3]+a[5]) == 1)
	{
		cout << "������������" << endl;
	}
	else
	{
		cout << "��������������" << endl;
	}
}