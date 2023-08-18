#include <bits/stdc++.h>
using namespace std;
long long bx, by, mx, my; // 	B点的坐标和马的坐标
long long flag[30][30] = {0}; // 标记当前点能否走 0为可以走 1为不能走
long long sum[30][30] = {0}; // 存储走到当前点可以有的总方法数
int main()
{
	/*
	  递推题：递推式+结束条件(边界条件)
	  走到当前点的方法数=走到当前点上面那个点的方法数+走到当前点左边那个点的方法数
	  f(x,y)=f(x-1,y)+f(x,y-1)
	 */
	cin >> bx >> by >> mx >> my;
	// 将两个点整体下移(加保护层) 防止马走步的时候越界 因此现在(2,2)是起点
	bx += 2; by += 2; mx += 2; my += 2; 
	
	flag[mx][my] = 1;
	flag[mx-1][my-2] = 1;
	flag[mx-2][my-1] = 1;
	flag[mx-2][my+1] = 1;
	flag[mx-1][my+2] = 1;
	flag[mx+1][my-2] = 1;
	flag[mx+2][my-1] = 1;
	flag[mx+2][my+1] = 1;
	flag[mx+1][my+2] = 1;
	
	// 走到边界的点的方法应该都为1 例如f(2,3)=f(1,3)+f(2,2)=0+1 走到(2,2)自己本身方法为1
	for(int i = 2; i < 30; i++)
	{
		sum[2][i] = 1;
		sum[i][2] = 1;
	}
	
	sum[2][1] = 1;
	for(int i = 2; i <= bx; i++)
	{
		for(int j = 2; j <= by; j++)
		{
			if(flag[i][j] == 1)
			{
				sum[i][j] = 0;
				continue;
			}
			sum[i][j] = sum[i-1][j] + sum[i][j-1];
		}
	}
	
	// 输出
	cout << sum[bx][by];
	return 0;
}
