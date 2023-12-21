#pragma once
#include<stdbool.h>
#include<iostream>

typedef char Otherinfo;
typedef char VerTexType;

#define MVNum 100 //最大顶点数
#define MAX 20
//int visited[MAX];//定义全局标记数组

//边的结点结构
typedef struct ArcNode {
    int adjvex;  //该边所指向的顶点的位置 
    struct ArcNode* nextarc;//指向下一条边的指针 
    //Otherinfo info;  //和边相关的信息 
}ArcNode;

//顶点的结点结构 
typedef struct VNode {
    VerTexType data;//顶点信息、
    ArcNode* firstarc;//指向第一条依附该顶点的边的指针 
}VNode, AdjList[MVNum];//AdjList表示邻接表类型

//图的结构定义 
typedef struct {
    AdjList vertices; //定义一个数组vertices,是vertex的复数形式
    int vexnum, arcnum; //图的当前顶点数和弧数
}ALGraph;


//
//int LocateVex(ALGraph G, int u);
//创建无向图
bool CreateUDG(ALGraph& G);
//打印无向图
void printGraph(ALGraph G);
//深度遍历
void DFSTraverse(ALGraph G, int v);
//广度遍历
void BFSTraverse(ALGraph G, int v);