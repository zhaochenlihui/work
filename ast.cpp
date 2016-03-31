// ast.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int min(int b[][5],int i, int j);
int a[5][5] = { 0, 3, 8, 100, -4, 100, 0, 100, 1, 7, 100, 4, 0, 100, 100, 2, 100, -5, 0, 100, 100, 100, 100, 6, 0 };
int c[5][5] = { 0 };
int d[5][5] = { 0 };
void exchange(int x[][5], int y[][5]);
int _tmain(int argc, _TCHAR* argv[])
{	for (int i = 0; i < 5; i++)
     for (int j = 0; j < 5; j++){
			c[i][j] = a[i][j];
			d[i][j] = c[i][j];
		}
	
		
	for (int t = 0; t < 3; t++){
		
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
				c[i][j] = min(d, i, j);
		}
		
		exchange(c, d);

	}
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
int min(int b[][5], int i, int j){
	int sum = 100;
	for (int m = 0; m < 5; m++)
	{
		int min = b[i][m] + a[m][j];
		if (min < sum)
			sum = min;
		
	}
	return sum;
}
void exchange(int x[][5], int y[][5]){
         for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)

			y[i][j] = x[i][j];
		
}