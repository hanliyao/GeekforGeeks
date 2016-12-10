#include<iostream>
using namespace std;
/*
	骑士环游问题
		每一次都尝试将一个新的节点添加到路径当中。如果添加的节点不满足限制条件，那么将这个节点舍弃。
		如果发现当前的尝试没有想要的结果，那么跳转到上一个状态。如果已将回到起始状态，则证明没有满足
		条件的解
*/
#include<iostream>
using namespace std;
#define N 8
bool isSafe(int x, int y, int sol[N][N])
{
	return (x >=0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}
void printSolution(int sol[N][N])
{
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			cout << sol[x][y] << " ";
		}
		cout << endl;
	}
}
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[])
{
	int k, next_x, next_y;
	if (movei == N*N)
		return true;
	for (k = 0; k < 8; k++)
	{
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if (isSafe(next_x, next_y, sol))
		{
			sol[next_x][next_y] = movei;
			if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove) == true)
				return true;
			else
				sol[next_x][next_y] = -1;
		}
	}
	return false;
}

bool solveKT()
{
	int sol[N][N];
	for(int x = 0 ; x < N ; x++)
		for (int y = 0; y < N; y++)
		{
			sol[x][y] = -1;
		}
	int xMove[8] = { 2, 1, -1, -2, -2, -1,  1,  2 };
	int yMove[8] = { 1, 2,  2,  1, -1, -2, -2, -1 };
	sol[0][0] = 0;
	if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == false)
	{
		cout << "Solution does not exist" << endl;
		return false;
	}
	else
	{
		printSolution(sol);
	}
	return true;
}