#include <bits/stdc++.h>
using namespace std;
int a, b;
bool isPrime(int x)
{
	for(int i = 3; i <= sqrt(x); i+=2)
	{
		if(x % i == 0) return false;
	}
	return true;
}
bool isHw(int x)
{
	// 整数翻转 123 --> 321 判断翻转后是否相等
	int s = 0, k = x;
	while(k != 0)
	{
		s += k % 10;
		s *= 10;
		k /= 10;
	}
	if(s / 10 == x) return true;
	return false;
}
int main()
{
	cin >> a >> b;
	if(a % 2 == 0) a++; // 将开始变为奇数
	if(b >= 10000000) b = 10000000;
	for(int i = a; i <= b; i+=2)
	{
		if(isHw(i) && isPrime(i))
		{
			cout << i << endl;
		}
	}
	
	return 0;
}

/*
  超时 可优化的点：
  1、质数判定，跳过除了2以外所有偶数
  2、所有偶数位的回文数都是11的倍数，因此他们不可能是质数，因此可以直接无需枚举超过七位数的数字
  如：3663 = 3 * 1001 + 6 * 10 * 11
  如：363363 = 3 * 100001 + 6 * 10 * 1001 + 3 * 100 * 11
  100001、1001、11 都是11的倍数
 */
