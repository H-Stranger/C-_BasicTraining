//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include<iostream>
//using namespace std;
//typedef char VertexType; //顶点类型
//typedef int EdgeType;    //边权值类型
//#define MAXVEX 100
//#define INFINITY 65535   //权值的无穷
//
//
////定义图的结构体  邻接矩阵
//struct AMGraph
//{
//	VertexType vexs[MAXVEX];//储存顶点的一维数组
//	EdgeType arc[MAXVEX][MAXVEX];//储存边的二维数组
//	int Num_vex, Num_arc;//图顶点数和边数
//};
//
////无向网创建
//void CreateAMGraph(AMGraph& G)
//{
//	int m, n;
//	cout << "请输入图的顶点数和边数" << endl;
//	cin >> G.Num_vex >> G.Num_arc;
//	cout << "请依次输入图的顶点：" << endl;
//	for (int i = 0; i < G.Num_vex; i++)
//	{
//		cin >> G.vexs[i];
//	}
//	//初始化储存边的二维数组
//	for (int i = 0; i < G.Num_vex; i++)
//		for (int j = 0; j < G.Num_vex; j++)
//		{
//			G.arc[i][j] = INFINITY;
//		}
//	//向二维数组中输入对应边的权值
//	for (int k = 0; k < G.Num_arc; k++)
//	{
//		cout << "请依次输入边（Vm,Vn）的下标m，n" << endl;
//		cin >> m >> n;
//		cout << "请输入边(" << m << "," << n << ")的权值" << endl;
//		cin >> G.arc[m - 1][n - 1];
//		//由于是无向网图，所以存在边（m，n），就存在边（n，m）所以我们还应该向二维数组的（n，m）位置输入权值
//		G.arc[n - 1][m - 1] = G.arc[m - 1][n - 1];
//	}
//}
//
//
//
////普里姆算法
//void MiniSpanTree_Prim(AMGraph& G)
//{
//	cout << "普里姆算法结果" << endl;
//	
//	//储存顶点下标的数组
//	//数组的下标表示对应顶点的下标，数组储存的是对应顶点的双亲
//	int adjvex[MAXVEX];
//	//储存权值的数组，如lowcost[1]=10表示此时连接顶点vexs[1]的边的最小权值为10，要是成功将顶点vexs[1]放入最小二叉树，则lowcost[1]设为0
//	int lowcost[MAXVEX];
//	//初始化数组
//	//以vexs[0]的点作为起始点
//	for (int i = 0; i < G.Num_vex; i++)
//	{
//		adjvex[i] = 0;
//	}
//	for (int i = 0; i < G.Num_vex; i++)
//	{
//		lowcost[i] = G.arc[0][i];
//	}
//	//顶点vexs[0]已经作为第一个顶点是根结点不需要找连接的边
//	lowcost[0] = 0;
//	//循环一次找出一个顶点到最小生成树中
//	//由于顶点0已经设为第一个最小生成树中的顶点，所以i从0开始
//	for (int i = 1; i < G.Num_vex; i++)
//	{
//		int min = INFINITY;
//		//用k表示此时所找到的放入二叉树的顶点vexs[k]
//		int k = 0;
//		for (int i = 1; i < G.Num_vex; i++)//循环所有顶点
//		{
//			if (lowcost[i] < min && lowcost[i] != 0)
//			{
//				min = lowcost[i];
//				k = i;
//			}
//		}
//		//找到了顶点vexs[k]，就不需要再找连接顶点vexs[k]的边了，将lowcost[k]改为0，之后便不再改变，也不在参与找最小权值的过程
//		lowcost[k] = 0;
//		//已经得到了最小生成树的一条边，可以进行打印
//		cout << "(" << G.vexs[adjvex[k]] << "," << G.vexs[k] << ")" << endl;
//		for (int i = 1; i < G.Num_vex; i++)//循环所有顶点
//		{
//			if (G.arc[k][i] < lowcost[i] && lowcost[i] != 0)
//			{
//				lowcost[i] = G.arc[k][i];
//				//进行了交换说明lowcost数组中储存的边发生了改变，即顶点vexs[i]的双亲发生了改变，双亲变为了vexs[k]
//				adjvex[i] = k;
//			}
//		}
//	}
//}
//
//#include<algorithm>
//#define N 100
//
//struct EdgeM
//{
//	VertexType Head;
//	VertexType Tail;
//	int lowcost;
//}Edge[N];
//
//int Vexset[N];//辅助数组，用于排除Kruskal出现环的情况
////思路：在Vexset数组中分别查找v1和v2所在的连通分量vs1和vs2，进行判断
////1. 如果vs1 != vs2 表明两个点处于不同的连通分量，输出此边，合并vs1和vs2两个连通分量
////2. 如果vs1和vs2相等，表明所选两个顶点属于同一个连通分量，那么则舍去此边选择下一个权值最小的边
//
//int minspatree_matrix[N][N];//最小生成树的邻接矩阵
//pair <int, int> ans[N];
//
///*下面是对书中Sort函数的实现*/
//bool cmp(const EdgeM& a, const EdgeM& b)
//{
//	return a.lowcost < b.lowcost;
//}
//
//void Sort(AMGraph G)
//{
//	sort(Edge, Edge + G.Num_arc, cmp);
//}
//
//int Locate(AMGraph G, VertexType v)
//{
//	for (int i = 0; i < G.Num_arc; ++i) {
//		if (G.vexs[i] == v) return i;
//	}
//	return -1;
//}
//
////克鲁斯卡尔算法
//void MiniSpanTree_Kruskal(AMGraph& G)
//{
//	cout << "克鲁斯卡尔算法结果" << endl;
//	Sort(G);
//	int cnt = 0;
//	for (int i = 0; i < G.Num_vex; ++i) Vexset[i] = i;//初始时，每个点为一个单独的连通分量                                                 
//	for (int i = 0; i < G.Num_arc; ++i)
//	{
//		//*这层循环是有问题的，选边的总数为G.vexnum - 1
//		int v1 = Locate(G, Edge[i].Head);//不是遍历所有的边
//		int v2 = Locate(G, Edge[i].Tail);
//
//		int vs1 = Vexset[v1];
//		int vs2 = Vexset[v2];
//
//		if (vs1 != vs2)
//		{
//			cout << Edge[i].Head << ' ' << Edge[i].Tail << endl;
//			ans[cnt++] = { Locate(G, Edge[i].Head), Locate(G, Edge[i].Tail) };
//			for (int j = 0; j < G.Num_vex; ++j) {
//				if (Vexset[j] == vs2) Vexset[j] = vs1;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	AMGraph G;
//	CreateAMGraph(G);
//	MiniSpanTree_Prim(G);
//
//	//MiniSpanTree_Kruskal(G);
//	system("pause");
//	return 0;
//}