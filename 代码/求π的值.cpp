#include <bits/stdc++.h>
using namespace std;
double arctanx(double x)
{
	double p; // 每一项
	double he = 0; // 总和
	int flag = 1;
	for(int i = 1;;i+=2)
	{
		p =  pow(x, i) / i;
		if(p < pow(10, -6)) return he;
		he += flag * p;
		flag = -flag;
	}
}
int main()
{
	printf("%.10lf", 6 * arctanx(1/sqrt(3)));
	return 0;
}
