#include <bits/stdc++.h>
using namespace std;
long long n, m, a[1000009] = {0}, b;
int find(int x)
{
	int l = 1, r = n, mid;
	while(l < r)
	{
		mid = (l + r) / 2;
		if(a[mid] >= x) r = mid;
		else l = mid + 1;
	}
	if(a[l] == x) return l;
	return -1;
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++)
	{
		cin >> b;
		cout << find(b) << " ";
	}
	
	return 0;
}
