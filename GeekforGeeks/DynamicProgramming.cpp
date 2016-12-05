/*
	��̬�滮����
		ʹ�õ�����
			�ص���������
			���ŵ��ӽṹ
	�������
		��ԭ��������ֽ�Ϊ�����⣬��������Ľ����ڱ���
		���û���ظ�����������⣬��ô��̬�滮��û���õ�
*/
#include<iostream>
using namespace std;
#define NIL -1
#define MAX 100
int lookup[MAX];

void _initialize()
{
	for (int i = 0; i < MAX;i++)
	{
		lookup[i] = NIL;
	}
}
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

/*��̬�滮���fib*/
int fibd(int n)
{
	if (lookup[n] == NIL)
	{
		if (n <= 1)
			lookup[n] = n;
		else
			lookup[n] = fib(n - 1) + fib(n - 2);
	}
	return lookup[n];
}

/*
	�Ե����ϵ�쳲���������
*/
/* C program for Tabulated version */
#include<stdio.h>
int fibb(int n)
{
	int *f = (int *)malloc(sizeof(int)*(n + 1));
	int i;
	f[0] = 0;   f[1] = 1;
	for (i = 2; i <= n; i++)
		f[i] = f[i - 1] + f[i - 2];

	return f[n];
}
void fib()
{

	int n = 5;
	_initialize();
	cout << "쳲������� 40 ��" << fib(n) << endl;

}