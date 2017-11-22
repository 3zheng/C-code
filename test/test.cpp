// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "test.h"

#include <stdio.h>
#include <math.h>
#include <list>

extern "C" void TestArray()
{
	int a[4][10] = { { 0 } };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a[i][j] = i * 10 + j;
		}
	}
	int *b = a[2];
	int *s = a[2];
	auto p = +1[s];
	auto compare_p = &(b[1]);
	//auto pp = -p;
	auto bb = b[-1];
	printf("test []");
	return;
}

using namespace std;

//返回最大值，测一下数组形参
int Get_max_num(int arr[5]) {
	

	list<int> list_tmp;
	int tmp = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > tmp) {
			tmp = arr[i];
		}
		list_tmp.push_back(arr[i]);
//		printf("%d\n", list_tmp[i]);
	}

	memset(arr, 0, 5 * sizeof(int));

	return tmp;
}

//对整数相除后的浮点数进行四舍五入的取整
int Do_division(int dividend, int divisor)	//dividendb被除数， divisor除数
{
	float result = static_cast<float>(dividend) / static_cast<float>(divisor);
	float num = floor(result);
	return result;
}

int main()
{
	int i_tmp = 0xdfffffff;
	unsigned int u_tmp = static_cast<unsigned int>(i_tmp);
	TestArray();
	B friend_object;
	int final = 3 * 25 * 11550 / 10000;
	float final2 = float(3.0 * 25.0 * 11550.0 / 10000.0);

	int arr[5] = { 18,990,334,8183,4577 };
	printf("%d\n", Get_max_num(arr));
	Do_division(49, 8);
    return 0;
}

