#define _CRT_SECURE_NO_WARNINGS
#include"AMGraph.h"
#include<iostream>
using namespace std;

//图G中查找顶点u，存在返回下标，否则返回-1
int LocateVex(AMGraph G, VerTexType u)
{
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vexs[i])
			return i;
	}
	return -1;
}

Status CreatUDN(AMGraph& G)
{
	cin >> G.vexnum >> G.arcnum;//输入总顶点数，总边数
	int i,j;
	for (i = 0; i < G.vexnum; i++)
	{
		cin >> G.vexs[i];     //依次输入顶点信息
	}
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			G.arcs[i][j] = MaxInt; //边的权值初始最大
		}
	}

	int v1, v2, w;//顶点 权值
	int k1, k2;//存储顶点在二维数组的位置
	for (i = 0; i < G.arcnum; i++)
	{
		cin >> v1 >> v2 >> w;//输入顶点和相应权值
		//确定v1和v2在G中的位置
		k1 = LocateVex(G, v1);
		k2 = LocateVex(G, v2);
		G.arcs[i][j] = w;
		G.arcs[j][i] = G.arcs[i][j];//设置<v1,v2>的对称点<v2,v1>的权值
	}
	return OK;
}//CreatUDN

