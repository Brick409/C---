#include "pch.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

class Rhombic
{
public:
	int len;
	char sign;
	void InitRhombic(int n, char s);
	void ShowUnSolidRhombic();
	void show();
private:

};

class Point
{
	int x;
	int y;
};

void Rhombic::InitRhombic(int n, char s)
{
	len = n;
	sign = s;
}

//¥Ú”°ø’–ƒ¡‚–Œ
void Rhombic::ShowUnSolidRhombic()
{
	int length = len * 2 - 1;
	int half = len - 1;
	int i = 0; int j = 0;
	for (i = 0;i < length;i++)
	{
		for (j = 0;j < length;j++)
		{
			if (j == abs(half - i) || j == length - abs(half - i) - 1)
			{
				cout << sign;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void Rhombic::show()
{
	cout << "test cpp" << endl;
}

int main()
{
	Rhombic obj;
	obj.len = 4;
	obj.show();
	obj.InitRhombic(5, '$');
	obj.ShowUnSolidRhombic();
	system("pause");
	return 0;
}