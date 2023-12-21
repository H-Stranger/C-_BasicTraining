#pragma once
#include<stdbool.h>
#include<iostream>

typedef char Otherinfo;
typedef char VerTexType;

#define MVNum 100 //��󶥵���
#define MAX 20
//int visited[MAX];//����ȫ�ֱ������

//�ߵĽ��ṹ
typedef struct ArcNode {
    int adjvex;  //�ñ���ָ��Ķ����λ�� 
    struct ArcNode* nextarc;//ָ����һ���ߵ�ָ�� 
    //Otherinfo info;  //�ͱ���ص���Ϣ 
}ArcNode;

//����Ľ��ṹ 
typedef struct VNode {
    VerTexType data;//������Ϣ��
    ArcNode* firstarc;//ָ���һ�������ö���ıߵ�ָ�� 
}VNode, AdjList[MVNum];//AdjList��ʾ�ڽӱ�����

//ͼ�Ľṹ���� 
typedef struct {
    AdjList vertices; //����һ������vertices,��vertex�ĸ�����ʽ
    int vexnum, arcnum; //ͼ�ĵ�ǰ�������ͻ���
}ALGraph;


//
//int LocateVex(ALGraph G, int u);
//��������ͼ
bool CreateUDG(ALGraph& G);
//��ӡ����ͼ
void printGraph(ALGraph G);
//��ȱ���
void DFSTraverse(ALGraph G, int v);
//��ȱ���
void BFSTraverse(ALGraph G, int v);