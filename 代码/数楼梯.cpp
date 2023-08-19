#include <bits/stdc++.h>
using namespace std;
long long n, a[5005] = {1}, b[5005] = {1}, c[5005] = {0}, len = 1;
// 高精度加法
void f()
{
	// c = a + b
	int jw = 0;
	for(int i = 0; i < len; i++)
	{
		c[i] = a[i] + b[i] + jw;
		jw = c[i] / 10;
		c[i] = c[i] % 10;
	}
	if(jw != 0) 
	{
		c[len] = jw;
		len++;
	}
	// a = b; b = c;
	for(int i = 0; i < len; i++)
	{
		a[i] = b[i];
		b[i] = c[i];
	}
}
int main()
{
	/*
	  上到第i层的方法数=上到第i-1层的方法数+上到第i-2层的方法数
	  f(i)=f(i-1)+f(i-2)
	  
	  1 1 2 3 5 8 13 21 ... 其实就是斐波那契数列
	 */
	cin >> n;
	if(n == 1 || n == 0) {cout << 1; return 0;}
	for(int i = 2; i <= n; i++) f(); 
	for(int i = len - 1; i >= 0; i--) cout << c[i];
	return 0;
}
