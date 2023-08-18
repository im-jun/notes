#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
	for(int i = 2; i * i <= x; i ++)
	{
		if(x % i == 0) return false;
	}
	return true;
}
bool isJsu(int x)
{
	int s = 0;
	while(x != 0)
	{
		s += x % 10;
		s *= 10;
		x /= 10;
	}
	s /= 10;
	if(isPrime(s)) return true;
	return false;
}
int main()
{
	for(int i = 11; i <= 99; i+=2)
	{
		if(isPrime(i) && isJsu(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}
