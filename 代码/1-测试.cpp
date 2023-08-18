#include <bits/stdc++.h>
using namespace std;
int fz(int x)
{
	// 整数翻转 123 --> 321 判断翻转后是否相等
	int s = 0, k = x;
	while(k != 0)
	{
		s += k % 10;
		s *= 10;
		k /= 10;
	}
	return s;
}
int main()
{
	cout << fz(123);
	return 0;
}
