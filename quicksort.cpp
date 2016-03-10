#include "stdafx.h"
#define N 5
int* qui(int a[], int p, int q);
int par(int a[], int p, int q);
int _tmain(int argc, _TCHAR* argv[])
{
	int a[N] = { 0 };
	for (int i = 0; i < N; i++)
	scanf_s("%d", &a[i]);
	int* p=a;
	p = qui(a, 0, N - 1);
	for (int i = 0; i < N; i++){
		printf("%d\n", *(p + i));
	}
	return 0;
}
int* qui(int a[], int p, int q){
	if (p < q)
	{
		int t = par(a, p, q);
		qui(a, p, t - 1);
		qui(a, t + 1, q);
	}
	 return a;
}
int par(int a[], int p, int q){
	int x = a[q];
	int i = p;
	for (int j = p; j < q; j++){
		if (a[j] < x)
		{
			int m = a[i];
			a[i] = a[j];
			a[j] = m;
			i++;
		}
	}
	a[q] = a[i];
	a[i] = x;
	return i;
}

