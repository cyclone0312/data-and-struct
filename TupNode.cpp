#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include"TupNode.h"


void CreatMat(TSMatrix& t, ElemType A[M][N])
{
	int i, j;
	t.rows = M; t.cols = N; t.nums = 0;
	for(i=0;i<M;i++)
		for (j = 0; j < N; j++)
			if (A[i][j] != 0)
			{
				t.data[t.nums].r = i;
				t.data[t.nums].c = j;
				t.data[t.nums].d = A[i][j];
				t.nums++;
		}
}

bool Value(TSMatrix& t, ElemType x, int i, int j)
{
	int k = 0, k1;
	if (i >= t.rows || j >= t.cols)
		return false;
	while (k<t.nums && i>t.data[k].r) k++;
	while (k<t.nums && i == t.data[k].r && j>t.data[k].c)
		k++;
	if (t.data[k].r == i && t.data[k].c == j) //若存在，直接修改非0元素的值
		t.data[k].d = x;
	else                                    //若不存在该非零元素则若干元素均后移一位 插入该非0元素
	{
		for (k1 = t.nums - 1; k1 >= k; k1--)
		{
			t.data[k1 + 1].r = t.data[k1].r;
			t.data[k1 + 1].c = t.data[k1].c;
			t.data[k1 + 1].d = t.data[k1].d;
		}
		t.data[k].r = i; t.data[k].c = j; t.data[k].d = x;
		t.nums++;
	}
	return true;
}

bool Assign(TSMatrix& t, ElemType x, int i, int j)
{
	int k = 0;
	if (i >= t.rows || j >= t.cols)
		return false;
	while (k<t.nums && i>t.data[k].r) k++;
	while (k<t.nums && i == t.data[k].r && j>t.data[k].c)
	{
		k++;
	}
	if (t.data[k].r == i && t.data[k].c == j)
		x = t.data[k].d;
	else x = 0;
	return true;
}

void DispMat(TSMatrix t)
{
	int k;
	if (t.nums <= 0)
		return;
	printf("\t%d\t%d\t%d\n", t.rows, t.cols, t.nums);
	printf("\t---------------\n");
		for(k=0;k<t.nums;k++)
			printf("\t%d\t%d\t%d\n", t.data[k].r, t.data[k].c, t.data[k].d);

}

void TranTat(TSMatrix t, TSMatrix& tb)
{
	int k, k1 = 0, v;
	tb.rows = t.cols; tb.cols = t.rows;
	tb.nums = t.nums;
	if (t.nums != 0)
	{
		for(v=0;v<t.cols;v++)
			for(k=0;k<t.nums;k++)
				if (t.data[k].c == v)
				{
					tb.data[k1].r = t.data[k].c;
					tb.data[k1].c = t.data[k].r;
					tb.data[k1].d = t.data[k].d;
					k1++;
				}
	}
}