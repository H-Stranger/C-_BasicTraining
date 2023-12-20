#define _CRT_SECURE_NO_WARNINGS
#include"AMGraph.h"
#define MAX_VERTEX_NUM 100

void MiniSpanTree_Prim(AMGraph G, VerTexType u)
{
	struct
	{
		VerTexType adjvex; //顶点类型
		ArcType lowcost;   //类型为边权值
	}closedge[MAX_VERTEX_NUM];
	int k = Locatevex(G, u);

	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (i != k)
			closedge[i] = { u,G.arcs[k][i] };
		closedge[k].lowcost = 0;
	}
	for (i = 1; i < G.vexnum; i++)
	{
		k = minnmum
	}

}