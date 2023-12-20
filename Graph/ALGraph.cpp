#define _CRT_SECURE_NO_WARNINGS
#include"ALGraph.h"
#include<iostream>
using namespace std;


//创立无向网

//图G中查找顶点u，存在返回下标，否则返回-1
int LocateVex(ALGraph G, VerTexType u)
{
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vertices[i].data)
			return i;
	}
	return -1;
}

Status CreateUDG(ALGraph& G)
{
	cin >> G.vexnum >> G.arcnum;  //输入总顶点数和总边数
	//构造表头节点
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		cin >> G.vertices[i].data;     //输入顶点值
		G.vertices[i].firstarc = NULL; //初始化表头结点指针
	}

	//输入边，建立邻接表
	int v1, v2;//存储两顶点
	int k1, k2;//顶点对应下标
	for (i = 0; i < G.arcnum; i++)
	{
		cin >> v1 >> v2;
		k1 = LocateVex(G, v1);
		k2 = LocateVex(G, v2);

		//头插思路
		//出度边
		ArcNode* p1 = new ArcNode;   //生成一个新的边结点*p1
		p1->adjvex = k1;    //邻接点序号为k1
		p1->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p1;  //将新结点*p1插入顶点vi的边表头部
		//入度边
		ArcNode* p2 = new ArcNode;   //生成一个新的边结点*p1
		p2->adjvex = k1;    //邻接点序号为k2
		p2->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p2;  //将新结点*p1插入顶点vi的边表头部
	}
}