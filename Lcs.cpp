// Lcs.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//void lcsprint(int b[], char x[], int n, int m);
int _tmain(int argc, _TCHAR* argv[])
{
	char y[17] = { ' ','G', 'T','C','G','T','T','C','G','G','A','A','T','G','C','A','T' };
	char x[17] = { ' ', 'A', 'C', 'C', 'G', 'G', 'T', 'C', 'G', 'A', 'G', 'A', 'T', 'G', 'C', 'A', 'C' };
	int c[17][17];
	int b[17][17];
	for (int i = 0; i < 17; i++)
	{
		c[i][0] = { 0 };
	}
	for (int i = 0; i < 17; i++)
	{
		c[0][i] = { 0 };
	}
	for (int i = 1; i < 17; i++)
	for (int j = 1; j < 17; j++){
		if (x[i] == y[j])
		{
			c[i][j] = c[i - 1][j - 1] + 1;
			b[i][j] = 7;//代表斜上方
		}
		else if (c[i - 1][j] < c[i][j - 1]){
			c[i][j] = c[i][j - 1];
			b[i][j] = 8;//代表左方
		}
		else {
			c[i][j] = c[i - 1][j];
			b[i][j] = 9;//代表上方
		}
	}
	int m = 16; int n = 16;
	while (m>0 & n > 0){
		if (b[m][n] == 7){
			printf("%c", x[m]);
			m--;
			n--;
		}
		else if (b[m][n] == 9){
			m--;
		}
		else 
			n--;
	}
	return 0;
}


