#pragma once
#define OK 1
typedef int Status;

//�ڽӱ�
#define MVNum 100
typedef char VerTexType;
typedef int OtherInfo;

//����ṹ
typedef struct VNode
{
	VerTexType data;  //������Ϣ
	ArcNode* firstarc; //ָ���һ�������ö���ı�
}VNode,AdjList[MVNum]; //AdjList ��ʾ�ڽӱ�����

//�ڽӱ��������� �洢�Ķ��� VNode����(����ṹ)������

//�ߣ������ṹ
typedef struct ArcNode
{
	int adjvex;					//�ñ�ָ��Ķ���λ��
	struct ArcNode* nextarc;	//ָ����һ���ߵ�ָ��
	OtherInfo info;				//�ͱ���ص���Ϣ
}ArcNode;

//ͼ�Ľṹ
typedef struct
{
	AdjList vertices;   //����ṹ��������
	int vexnum, arcnum; //ͼ��ǰ�������ͻ���
}ALGraph;

int visited[MVNum];