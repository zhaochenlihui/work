// insert sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define N 8
void insertsort(int a[], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int a[N];
	for (int i = 0; i < N; i++){
		scanf_s("%d", &a[i]);
	}
	insertsort(a, N);
	for (int i = 0; i < N; i++){
		printf("%d\n", a[i]);
	}
	return 0;
}
void insertsort(int a[], int n){
	for (int i = 1; i < n; i++){
		int k = a[i];
		int j = i - 1;
		for (j = i - 1; j >= 0 & a[j]>k; j--){
			a[j + 1] = a[j];
		}
		a[j + 1] = k;
	}
}
