#pragma once

#define OK 1
typedef int Status;
//�ڽӾ���
#define MaxInt 32767     //Ȩֵ�����޴�
#define MVNum 100
typedef char VerTexType; //��������
typedef int ArcType;     //��Ȩֵ����Ϊ����

typedef struct
{
	VerTexType vexs[MVNum];     //�����
	ArcType arcs[MVNum][MVNum]; //�ڽӾ���
	int vexnum, arcnum;         //ͼ��ǰ�������ͱ���
}AMGraph;//Adjacency Matrix Graph

int visited[MVNum];

int LocateVex(AMGraph G, VerTexType u);

Status CreatUDN(AMGraph& G);
