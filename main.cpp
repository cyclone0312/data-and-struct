#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include"TupNode.h"
using namespace std;
ElemType a[N][N];
const int N = 1e3;
int main()
{
	TSMatrix t,tb;
	CreatMat(t, a);
	int x,a,b;
	cin >> x >> a >> b;
	Value(t, x, a, b);
	Assign(t, x, a, b);
	DispMat(t);
	TranTat(t, tb);
	return 0;
}