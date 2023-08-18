#include <bits/stdc++.h>
using namespace std;
long long n, c, a[1000009], ans = 0;
int main()
{
	cin >> n >> c;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1); // 1 1 2 3	A = B + C
	// 枚举A 看是否存在B 满足B=A-C
	for(int i = 1; i <= n; i++)
	{
		long long B = a[i] - c;
		ans += ((upper_bound(a+1,a+n+1,B)-a) - (lower_bound(a+1,a+n+1,B)-a));
	}
	cout << ans;
	
	return 0;
}

/*
  二分有关的库函数
  假设有个排好序的a数组 [2,3,4,4,4,5,5,7,9,10]
  lower_bound(a,a+n,x)-a ---> 数组中 >=x 的地址 - 数组名 ---> 数组中>=x的位置
  upper_bound(a,a+n,x)-a ---> 数组中 >x 的地址 - 数组名 ---> 数组中>x的位置
  
  lower_bound(a,a+10,4)-a = 2
  upper_bound(a,a+10,4)-a = 5
 */
