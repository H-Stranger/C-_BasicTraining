#define _CRT_SECURE_NO_WARNINGS
#include"ALGraph.h"
#include<iostream>
using namespace std;


//����������

//ͼG�в��Ҷ���u�����ڷ����±꣬���򷵻�-1
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
	cin >> G.vexnum >> G.arcnum;  //�����ܶ��������ܱ���
	//�����ͷ�ڵ�
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		cin >> G.vertices[i].data;     //���붥��ֵ
		G.vertices[i].firstarc = NULL; //��ʼ����ͷ���ָ��
	}

	//����ߣ������ڽӱ�
	int v1, v2;//�洢������
	int k1, k2;//�����Ӧ�±�
	for (i = 0; i < G.arcnum; i++)
	{
		cin >> v1 >> v2;
		k1 = LocateVex(G, v1);
		k2 = LocateVex(G, v2);

		//ͷ��˼·
		//���ȱ�
		ArcNode* p1 = new ArcNode;   //����һ���µı߽��*p1
		p1->adjvex = k1;    //�ڽӵ����Ϊk1
		p1->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p1;  //���½��*p1���붥��vi�ı߱�ͷ��
		//��ȱ�
		ArcNode* p2 = new ArcNode;   //����һ���µı߽��*p1
		p2->adjvex = k1;    //�ڽӵ����Ϊk2
		p2->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p2;  //���½��*p1���붥��vi�ı߱�ͷ��
	}
}