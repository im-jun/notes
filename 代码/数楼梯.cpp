#include <bits/stdc++.h>
using namespace std;
long long n, sum[5005] = {0};
int main()
{
	/*
	  上到第i层的方法数=上到第i-1层的方法数+上到第i-2层的方法数
	  sum(i)=sum(i-1)+sum(i-2)
	 */
	cin >> n;
	sum[1] = 1, sum[2] = 2;
	for(int i = 3; i <= n; i++)
	{
		sum[i] = sum[i-1] + sum[i-2];
	}
	 
	cout << sum[n];
	return 0;
}
