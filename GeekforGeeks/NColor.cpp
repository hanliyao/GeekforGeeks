/*
	N色问题
		问题描述:对给定的有向图的定点进行着色，为了确保
		相邻的定点之间没有相同的颜色，问这样的着色方案至少
		需要多少种颜色
*/
#include<iostream>
using namespace std;
#define V 4
void printSolution(int color[])
{
	cout << "Solution Exists :";
	for (int i = 0; i < V; i++)
	{
		cout << color[i] << " ";
	}
	cout << endl;
}
/*
	c 代表要填充的颜色
*/
bool isSafeN(int v, bool graph[V][V], int color[], int c)
{
	return false;
}
void main()
{

	cout << "Coloring algorithm " << endl;
}