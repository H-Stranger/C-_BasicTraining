#pragma once
#define OK 1
typedef int Status;

//邻接表
#define MVNum 100
typedef char VerTexType;
typedef int OtherInfo;

//顶点结构
typedef struct VNode
{
	VerTexType data;  //顶点信息
	ArcNode* firstarc; //指向第一条依附该顶点的边
}VNode,AdjList[MVNum]; //AdjList 表示邻接表类型

//邻接表类型数组 存储的都是 VNode类型(顶点结构)的数据

//边（弧）结构
typedef struct ArcNode
{
	int adjvex;					//该边指向的顶点位置
	struct ArcNode* nextarc;	//指向下一条边的指针
	OtherInfo info;				//和边相关的信息
}ArcNode;

//图的结构
typedef struct
{
	AdjList vertices;   //顶点结构类型数组
	int vexnum, arcnum; //图当前顶点数和弧数
}ALGraph;

int visited[MVNum];