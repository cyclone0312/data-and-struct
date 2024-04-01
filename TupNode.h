#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
const int M = 1e3 + 6;
const int N = 1e3 + 6;
const int MaxSize = 1e7 + 3;
typedef int ElemType;
typedef struct
{
	int r;
	int c;
	int d;
} TupNode;
typedef struct
{
	int rows;
	int cols;
	int nums;
	TupNode data[MaxSize];
} TSMatrix;
void CreatMat(TSMatrix& t, ElemType A[M][N]);
bool Value(TSMatrix& t, ElemType x, int i, int j);
bool Assign(TSMatrix& t, ElemType x, int i, int j);
void DispMat(TSMatrix t);
void TranTat(TSMatrix t, TSMatrix& tb);