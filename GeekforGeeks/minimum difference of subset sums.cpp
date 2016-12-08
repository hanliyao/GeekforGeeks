#include<iostream>
#include<algorithm>
using namespace std;
int findMinRec(int arr[], int i, int sumCalculated, int sumTotal)
{
	if (i == 0)
		return abs((sumTotal - sumCalculated) - sumCalculated);
	return min(findMinRec(arr, i - 1, sumCalculated + arr[i - 1], sumTotal),
		findMinRec(arr, i - 1, sumCalculated, sumTotal));
}
int findMin(int arr[], int n)
{
	int sumTotal = 0;
	for (int i = 0; i < n; i++)
	{
		sumTotal += arr[i];
	}
	return findMinRec(arr, n, 0, sumTotal);
}

//�ҵ��������ϵĻ��ֲ��ܰ���˳��ķ�ʽ����