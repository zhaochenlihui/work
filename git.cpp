// git.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("请输入气球个数：");
	int i;
	scanf_s("%d", &i);
	switch (i)
	{
	case 1:printf("position(0,0),r=1"); break;
	case 2:printf("position(0.82843,0.82843),r=0.17157"); break;
	case 3:printf("position(0.82843,-0.82843),r=0.17157"); break;
	case 4:printf("position(-0.82843,0.82843),r=0.17157"); break;
	case 5:printf("position(-0.82843,-0.82843),r=1"); break;
	default:
		break;
	}
	return 0;
}

