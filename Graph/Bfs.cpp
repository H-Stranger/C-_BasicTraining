#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"ALGraph.h"

//�ڽӱ�BFS
//���к�ѭ��
void BFS(ALGraph G, int v)
{
	cout << v;
	visited[v] = 1;
	InitQueue(Q);  //��������Q��ʼ�����ÿ�
	EnQueue(Q, v);  //v����
	while (!QueueEmpty(Q)) //���зǿ�
	{
		DeQueue(Q, u);     //��ͷԪ�س��Ӳ���Ϊu
		int w;
		for (w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w))
		{
			//wΪu��δ���ʵ��ڽӶ���
			if (!visited[v])
			{
				cout<<w;
				visited[w] =1;
				EnQueue(Q,w);//w����
			}
		}
	}
}