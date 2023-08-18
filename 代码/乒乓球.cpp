#include <bits/stdc++.h>
using namespace std;
char a[90000];
int pos;
void sc(int score)
{
	int w = 0, l = 0; // 记分牌
	for(int i = 1; i < pos; i++)
	{
		if(a[i] == 'W') w++;
		else if(a[i] == 'L') l++;
		if((w >= score || l >= score) && abs(w - l) >= 2)
		{
			printf("%d:%d\n", w, l);
			w = 0; l = 0;
		}
	}
	// 最后一局不一定比完 单独输出一下
	printf("%d:%d\n", w, l);
}
int main()
{
	for(pos = 1; ; pos++)
	{
		cin >> a[pos];
		if(a[pos] == 'E') break;
	}
	sc(11);
	cout << endl;
	sc(21);
	return 0;
}

