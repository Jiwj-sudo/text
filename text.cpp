#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("n��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ: %f\n", *pFloat);
	/*int m;
	while (cin >> m)
		printf("%d\n", m);*/
	return 0;
}