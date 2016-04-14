#include "stdafx.h"
#define N 5
#define max 9
int* countsort(int a[], int k,int d[]);
void radixsort(int d[], int n);
int _tmain(int argc, _TCHAR* argv[])
{
	int a[N] = { 0 };
	for (int i = 0; i < N; i++){
		scanf_s("%d", &a[i]); 
	}	
	radixsort(a, 3);
	return 0;
}
void radixsort(int d[], int n){
	int tmp[N] = { 0 };
	int base = 1;
	int *a;
	int t = n;
	while (n != 0){
		base = base * 10;
		for (int i = 0; i < N; i++){
			tmp[i] = d[i] % base;//important
			tmp[i] /= base / 10;//
		}
		a = countsort(tmp, 9, d);		
			for (int i = 0; i < N; i++){
				d[i] = *(a + i);
			}
		n--;
	}
	for (int i = 0; i <= N - 1; i++){
		printf("%d\n", d[i]);
	}
}
int * countsort(int a[], int k,int d[]){
	int c[max + 1] = { 0 };
	k = 9;
	for (int i = 0; i <N; i++){
		c[a[i]] = c[a[i]] + 1;
	}
    for (int i = 1; i < k + 1; i++){
		c[i] = c[i] + c[i - 1];
	}
	int b[N] = { 0 };
	for (int j = N - 1; j >= 0; j--){
		int t = c[a[j]];
		b[t - 1] = d[j];
		c[a[j]] = c[a[j]] - 1;
	}
	return b;
}