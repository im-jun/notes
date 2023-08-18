#include <iostream>
using namespace std;
bool isHW(int x)
{
	int s = 0, k = x;
	while(x != 0)
	{
		s += x % 10;
		s *= 10;
		x /= 10;
	}
	if(s / 10 == k) return true;
	return false;
}
bool isPrime(int x)
{
	for(int i = 2; i * i <= x; i++)
	{
		if(x % i == 0) return false;
	}
	return true;
}
int main()
{
	for(int i = 100; i <= 999; i++)
	{
		if(isHW(i) && isPrime(i)) cout << i << endl;
	}
	
	return 0;
}
