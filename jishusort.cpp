// jishusort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define N 3
#define max 5
void countsort(int a[], int k);
int _tmain(int argc, _TCHAR* argv[])
{
	
	int a[N] = { 0 };
	for (int i = 0; i < N; i++){
		scanf_s("%d", &a[i]);
	}
	countsort(a,max);
	
	return 0;
}
void countsort(int a[],int k){
	int c[max+1]= { 0 };
	k = 5;
	for (int i = 0; i <N; i++){
		c[a[i]] = c[a[i]] + 1;
	}for (int i = 1; i < k+ 1; i++){
		c[i] = c[i] + c[i - 1];
	}
	int b[N] = { 0 };
	for (int j = N-1; j >= 0; j--){
		int t = c[a[j]];
		b[t-1] = a[j];
		c[a[j]] = c[a[j]] - 1;
	}
	for (int i = 0; i<=N-1; i++){
		printf("%d\n", b[i]);
	}
}
