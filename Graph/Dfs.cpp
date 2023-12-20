#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include"AMGraph.h"

//邻接矩阵DFS
void DFS(AMGraph G, int v)
{
	//访问第v个顶点
	cout << v;
	visited[v] = 1;
	//依次检查邻接矩阵所在行
	int w;
	for (w = 0; w < G.vexnum; w++)
	{
		//w是v的邻接点，且w未访问，则递归调用DFS
		if ((G.arcs[v][w] != 0) && (!visited[w]))
		{
			DFS(G, w);
		}
	}
}