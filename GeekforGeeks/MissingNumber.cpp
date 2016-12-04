#include<iostream>
using namespace std;
/*
	 找到0-n-1中缺失的数字
*/
int MissingNumber(int a[], int n)
{
	int i, total=0,sum=0;
	total = (n+2)*(n + 1) / 2;
	for (i = 0; i < n; i++)
		sum = sum + a[i];
	return total - sum;
}
int main()
{
	int a[] = { 1,2,4,5,6 };
	int miss = MissingNumber(a, 5);
	cout << miss << endl;
}