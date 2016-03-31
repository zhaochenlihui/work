// spr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int w[5][5] = { 0,6,100,7,100,100,0,5,8,-4,100,-2,0,100,100,100,100,-3,0,9,2,100,7,100,0 };
struct MyStruct
{
	char a;
	int d;
	MyStruct *p;

}mystruct[4];
void relax(int u, int v){
	if (mystruct[v].d > mystruct[u].d+w[u][v]){
		mystruct[v].d = mystruct[u].d + w[u][v];
		mystruct[v].p = &mystruct[u];
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < 5; i++){
		mystruct[i].d = 100;
		mystruct[i].p = NULL;
	}
	mystruct[0].d = 0;
	mystruct[0].a = 's';
	mystruct[1].a = 't';
	mystruct[2].a = 'x';
	mystruct[3].a = 'y';
	mystruct[4].a = 'z';
	for (int i = 0; i < 4; i++)
	for (int j = 0; j < 5; j++)
	for (int k = 0; k < 5; k++)
		relax(j, k);
	for (int i = 1; i < 5; i++)
	{
		printf("s到%c距离为%d\n ", mystruct[i].a, mystruct[i].d);
		MyStruct* m = &mystruct[i];
		do{
		printf("%c", m->a);
		m = m->p;
		} while (m->p != NULL);
		printf("s");
		printf("\n");
		}
		return 0;
	}

