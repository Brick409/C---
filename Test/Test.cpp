_// Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

//定义一个菱形结构
typedef struct rhombic
{
	int len;  //长度
	char sign;  //角度
}Rhombic;

Rhombic * InitRhombic(int n, char s)
{
	Rhombic *pobj = (Rhombic *)malloc(sizeof(Rhombic));
	if (!pobj)
	{
		return NULL;
	}
	pobj->len = n;
	pobj->sign = s;
	return pobj;
}

void InitRhombic(Rhombic*pobj, int n, char s)
{
	pobj->len = n;
	pobj->sign = s;
}

void DestroyRhombic(Rhombic ** pobj)
{
	if (*pobj)
	{
		free(*pobj);
		*pobj = NULL;
	}
}

//打印空心菱形
void ShowUnSolidRhombic(Rhombic *pobj)
{
	int length = pobj->len * 2 - 1;
	int half = pobj->len-1;
	int i = 0; int j = 0;
	for (i=0;i<length;i++)
	{
		for (j=0;j<length;j++)
		{
			if (j==abs(half-i) || j==length-abs(half-i)-1)
			{
				cout << pobj->sign;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

//打印实心菱形
void ShowSolidRhombic(Rhombic *pobj)
{
	int length = pobj->len * 2 - 1;
	int half = pobj->len - 1;
	int i = 0; int j = 0;
	for (i = 0;i < length;i++)
	{
		for (j = 0;j < length;j++)
		{
			if (j >= abs(half - i) && j <= length - abs(half - i) - 1)
			{
				cout << pobj->sign;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
#if 0
int main()
{
	Rhombic OBJ;
	InitRhombic(&OBJ, 5, '*');
	ShowUnSolidRhombic(&OBJ);

	Rhombic *pobj = InitRhombic(5, '$');

	ShowSolidRhombic(pobj);
	DestroyRhombic(&pobj);
	system("pause");
	std::cout << "Hello World!\n";
	return 0;
}
#endif
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
