#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为: %f\n", *pFloat);
	/*int m;
	while (cin >> m)
		printf("%d\n", m);*/
	return 0;
}