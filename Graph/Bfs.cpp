#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"ALGraph.h"

//邻接表BFS
//队列和循环
void BFS(ALGraph G, int v)
{
	cout << v;
	visited[v] = 1;
	InitQueue(Q);  //辅助队列Q初始化，置空
	EnQueue(Q, v);  //v进队
	while (!QueueEmpty(Q)) //队列非空
	{
		DeQueue(Q, u);     //队头元素出队并置为u
		int w;
		for (w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w))
		{
			//w为u尚未访问的邻接顶点
			if (!visited[v])
			{
				cout<<w;
				visited[w] =1;
				EnQueue(Q,w);//w进队
			}
		}
	}
}