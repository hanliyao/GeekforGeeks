/*
	问题描述
		找到一个序列中最常的递增子序列
	解决方法
		首先知道当前子序列中最大的元素的什么，如果下一个元素大于
		子序列中最大的元素，那么最大子序列中元素的个数+1
*/
#include<iostream>
#include<vector>
using namespace std;
/*
	D代表输入的序列
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