// mergesort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void mergesort(int a[], int b, int c);
void merge(int a[], int b, int c, int d);
#define N 8
int t[N] = { 0 };
int _tmain(int argc, _TCHAR* argv[])
{
	int a[N];
	for (int i = 0; i < N; i++)
		scanf_s("%d", &a[i]);
	mergesort(a, 0, N - 1);
	for (int i = 0; i < N; i++)
		printf("%d\n", t[i]);
	return 0;
}

void mergesort(int a[], int b, int c){
	
	if (b < c)
	{
		int m = (b + c) / 2;
		mergesort(a, b, m);
		mergesort(a, m + 1, c);
		merge(a, b, m, c);
	}
}
void merge(int a[], int b, int c, int d){
	
	int i;
	int j;
	int k;
	for (i = b, j = c + 1, k = 0; k <= d - b; k++){
		if (i == c + 1){
			t[k] = a[j];
			j++;
			continue;
		}
		if (j == d + 1){
			t[k] = a[i];
			i++;
			continue;
		}
		if (a[i] < a[j]){
			t[k] = a[i];
			i++;
		}
		else{
			t[k] = a[j];
			j++;
		}
	}
	for (i = b, j = 0; i <= d; i++, j++){
		a[i] = t[j];
	}
}