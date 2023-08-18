#include <bits/stdc++.h>
using namespace std;
int len = 100000;
long long n, a[100000] = {1}, s[100000] = {0};
// 乘
void highMul(int i)
{
	for(int j = 0; j < len; j++) a[j] *= i; // 每位同乘i
	// 处理进位
	for(int j = 0; j < len; j++) 
	{
		a[j + 1] += a[j] / 10;
		a[j] %= 10;
	}
}
// 加
void highAdd()
{
	for(int i = 0; i < len; i++) s[i] += a[i]; // 每位相加
	// 处理进位
	for(int i = 0; i < len; i++)
	{
		s[i + 1] += s[i] / 10;
		s[i] %= 10;
	}
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		highMul(i);
		highAdd();
	}
	// 去掉前导0
	len -= 1;
	while(!s[len]) len--;
	for(int i = len; i >= 0; i--) cout << s[i];
	return 0;
}
