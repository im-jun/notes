#include <iostream>
using namespace std;
string a, b;
int x[600] = {0}, y[600] = {0}, z[600] = {0};
int main()
{
	cin >> a >> b;
	// 将低位放前面
	for(int i = a.size() - 1, j = 1; i >= 0; i--, j++)
	{
		x[j] = a[i] - '0';
	}
	for(int i = b.size() - 1, j = 1; i >= 0; i--, j++)
	{
		y[j] = b[i] - '0';
	}
	// 进行每位相加
	int len = max(a.size(), b.size());
	for(int i = 1; i <= len; i++)
	{
		// 模拟进位
		z[i] += x[i] + y[i];
		z[i + 1] += z[i] / 10;
		z[i] %= 10;
	}
	// 最后进位可能会导致位数增加
	if(z[len+1]) len++;
	for(int i = len; i >= 1; i--) cout << z[i];
	return 0;
}

