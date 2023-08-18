#include <iostream>
using namespace std;
int isQ(int a)
{
	int b = 0;
	for(int i = 1; i < a; i++)
	{
		if(a % i == 0) b += i;
	}
	int bsum = 0; // b的因子之和
	for(int i = 1; i < b; i++)
	{
		if(b % i == 0) bsum += i;
	}
	if(bsum == a && a < b) return b;
	return -1;
}
int main()
{
	for(int i = 1; ; i++)
	{
		if(isQ(i) != -1) 
		{
			cout << i << " " << isQ(i);
			return 0;
		}
	}
	
	return 0;
}
