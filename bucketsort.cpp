// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define N 8
void bucketsort(float a[], int n);
int _tmain(int argc, _TCHAR* argv[])
{
	float a[N] = { 0 };
	for (int i = 0; i < N; i++){
		scanf_s("%f", &a[i]);
	}
	bucketsort(a, N);
	return 0;
}
void bucketsort(float a[], int n){
	float bucket[10][10] = { 0 };
	int count[10] = { 0 };
	for (int i = 0; i < n; i++){
		int t = 10 * a[i];
		bucket[t][count[t]] = a[i];
		count[t]++;
		int j = count[t]-1;
		float x = bucket[t][j];
		while (j>0 & bucket[t][j-1] >x){
			bucket[t][j] = bucket[t][j-1];
			j--;
		}
		bucket[t][j] = x;
	}
	for (int i = 0; i < 10; i++)
	for (int j = 0; j < count[i]; j++)
		printf("%.3f\n", bucket[i][j]);
}
