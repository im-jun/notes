#include <iostream>
using namespace std;
string a, b;
int x[20005] = {0}, y[20005] = {0}, z[20005] = {0};
int main()
{
	cin >> a >> b;
	int lena = a.size(), lenb = b.size();
	for(int i = lena - 1, j = 1; i >= 0; i--, j++)
	{
		x[j] = a[i] - '0';
	}
	for(int i = lenb - 1, j = 1; i >= 0; i--, j++)
	{
		y[j] = b[i] - '0';
	}
	for(int i = 1; i <= lena; i++)
	{
		for(int j = 1; j <= lenb; j++)
		{
			z[i + j - 1] += x[i] * y[j]; // 计算贡献值
		}
	}
	// 处理进位
	int len = lena + lenb; // 两数之积得到的数的位数不超过两数位数之和
	for(int i = 1; i <= len; i++)
	{
		z[i + 1] += z[i] / 10;
		z[i] %= 10;
	}
	// 去掉前导0
	while(!z[len]) len--;
	for(int i = max(len, 1); i >= 1; i--) cout << z[i];
	return 0;
}

