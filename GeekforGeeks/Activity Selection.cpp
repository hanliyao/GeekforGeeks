/*
	̰���㷨
		�㷨�ı�����ÿһ����ѡ��ǰ�����Ž⡣
		��Ϊ�ֲ������Ž����ȫ�ֵ����Ž�
	�ڴ���NP�����ʱ��̰���㷨��õ����Ž�Ľ��ƽ�
*/
#include<iostream>
using namespace std;
/*
	��������
		��������������ʼʱ��������ս�ʱ�䣬����ѡ������Ļ��Ŀ��
		ǰ��������������ʱ���ϲ��������ͻ
*/
void printMaxActivities(int s[], int f[], int n)
{
	int i, j;
	cout << "Following activiteis are selected" << endl;
	i = 0;
	cout << i << " ";
	for (j = 1; j < n; j++)
	{
		if (s[j] >= f[i])
		{
			cout << j << " ";
			i = j;
		}
	}
	cout << endl;
}
void ActivitySelectionDemo()
{
	int s[] = {1,3,0,5,8,5};
	int f[] = {2,4,6,7,9,9};
	int n = sizeof(s) / sizeof(int);
	printMaxActivities(s, f, n);
	return;
}