#include <bits/stdc++.h>
using namespace std;
int n;
bool isWq(int x)
{
	int sum = 0;
	for(int i = 1; i < x; i++)
	{
		if(x % i == 0) sum += i;
	}
	if(sum == x) return true;
	return false;
}
int main()
{
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		if(isWq(i)) cout << i << endl;
	}
	
	return 0;
}
