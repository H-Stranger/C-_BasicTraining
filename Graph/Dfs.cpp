#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include"AMGraph.h"

//�ڽӾ���DFS
void DFS(AMGraph G, int v)
{
	//���ʵ�v������
	cout << v;
	visited[v] = 1;
	//���μ���ڽӾ���������
	int w;
	for (w = 0; w < G.vexnum; w++)
	{
		//w��v���ڽӵ㣬��wδ���ʣ���ݹ����DFS
		if ((G.arcs[v][w] != 0) && (!visited[w]))
		{
			DFS(G, w);
		}
	}
}