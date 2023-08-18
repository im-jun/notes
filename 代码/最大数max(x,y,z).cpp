#include <bits/stdc++.h>
using namespace std;
int zd(int a, int b, int c)
{
	int maxn = a;
	maxn = max(maxn, b);
	maxn = max(maxn, c);
	return maxn;
}
int main()
{
	int a, b, c, x, y, z;
	cin >> a >> b >> c;
	x = zd(a, b, c);
	y = zd(a + b, b, c);
	z = zd(a, b, b + c);
	printf("%.3lf", x * 1.0 / (y * z));
	return 0;
}
