#define _CRT_SECURE_NO_WARNINGS
#include"AMGraph.h"
#include<iostream>
using namespace std;

//ͼG�в��Ҷ���u�����ڷ����±꣬���򷵻�-1
int LocateVex(AMGraph G, VerTexType u)
{
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vexs[i])
			return i;
	}
	return -1;
}

Status CreatUDN(AMGraph& G)
{
	cin >> G.vexnum >> G.arcnum;//�����ܶ��������ܱ���
	int i,j;
	for (i = 0; i < G.vexnum; i++)
	{
		cin >> G.vexs[i];     //�������붥����Ϣ
	}
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			G.arcs[i][j] = MaxInt; //�ߵ�Ȩֵ��ʼ���
		}
	}

	int v1, v2, w;//���� Ȩֵ
	int k1, k2;//�洢�����ڶ�ά�����λ��
	for (i = 0; i < G.arcnum; i++)
	{
		cin >> v1 >> v2 >> w;//���붥�����ӦȨֵ
		//ȷ��v1��v2��G�е�λ��
		k1 = LocateVex(G, v1);
		k2 = LocateVex(G, v2);
		G.arcs[i][j] = w;
		G.arcs[j][i] = G.arcs[i][j];//����<v1,v2>�ĶԳƵ�<v2,v1>��Ȩֵ
	}
	return OK;
}//CreatUDN

