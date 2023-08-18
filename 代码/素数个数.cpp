#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
	if(x == 2) return true;
	for(int i = 2; i * i <= x; i++)
	{
		if(x % i == 0) return false;
	}
	return true;
}
int main()
{
	int n, ans = 0;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		if(isPrime(i)) ans++;;
	}
	cout << ans;
	return 0;
}
