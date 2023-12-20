#pragma once

#define OK 1
typedef int Status;
//邻接矩阵
#define MaxInt 32767     //权值的无限大
#define MVNum 100
typedef char VerTexType; //顶点类型
typedef int ArcType;     //边权值类型为整型

typedef struct
{
	VerTexType vexs[MVNum];     //顶点表
	ArcType arcs[MVNum][MVNum]; //邻接矩阵
	int vexnum, arcnum;         //图当前顶点数和边数
}AMGraph;//Adjacency Matrix Graph

int visited[MVNum];

int LocateVex(AMGraph G, VerTexType u);

Status CreatUDN(AMGraph& G);
