#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
	for(int i = 2; i * i <= x; i++)
	{
		if(x % i == 0) return false;
	}
	return true;
}
void chai(int x)
{
	for(int i = 2; i < x; i++)
	{
		if(isPrime(i) && isPrime(x - i))
		{
			cout << x << "=" << i << "+" << x - i << endl;
			break;
		}
	}
}
int main()
{
	for(int i = 6; i <= 100; i+=2)
	{
		chai(i);
	}
	
	return 0;
}
