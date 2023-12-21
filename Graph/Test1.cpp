//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include<iostream>
//using namespace std;
//typedef char VertexType; //��������
//typedef int EdgeType;    //��Ȩֵ����
//#define MAXVEX 100
//#define INFINITY 65535   //Ȩֵ������
//
//
////����ͼ�Ľṹ��  �ڽӾ���
//struct AMGraph
//{
//	VertexType vexs[MAXVEX];//���涥���һά����
//	EdgeType arc[MAXVEX][MAXVEX];//����ߵĶ�ά����
//	int Num_vex, Num_arc;//ͼ�������ͱ���
//};
//
////����������
//void CreateAMGraph(AMGraph& G)
//{
//	int m, n;
//	cout << "������ͼ�Ķ������ͱ���" << endl;
//	cin >> G.Num_vex >> G.Num_arc;
//	cout << "����������ͼ�Ķ��㣺" << endl;
//	for (int i = 0; i < G.Num_vex; i++)
//	{
//		cin >> G.vexs[i];
//	}
//	//��ʼ������ߵĶ�ά����
//	for (int i = 0; i < G.Num_vex; i++)
//		for (int j = 0; j < G.Num_vex; j++)
//		{
//			G.arc[i][j] = INFINITY;
//		}
//	//���ά�����������Ӧ�ߵ�Ȩֵ
//	for (int k = 0; k < G.Num_arc; k++)
//	{
//		cout << "����������ߣ�Vm,Vn�����±�m��n" << endl;
//		cin >> m >> n;
//		cout << "�������(" << m << "," << n << ")��Ȩֵ" << endl;
//		cin >> G.arc[m - 1][n - 1];
//		//������������ͼ�����Դ��ڱߣ�m��n�����ʹ��ڱߣ�n��m���������ǻ�Ӧ�����ά����ģ�n��m��λ������Ȩֵ
//		G.arc[n - 1][m - 1] = G.arc[m - 1][n - 1];
//	}
//}
//
//
//
////����ķ�㷨
//void MiniSpanTree_Prim(AMGraph& G)
//{
//	cout << "����ķ�㷨���" << endl;
//	
//	//���涥���±������
//	//������±��ʾ��Ӧ������±꣬���鴢����Ƕ�Ӧ�����˫��
//	int adjvex[MAXVEX];
//	//����Ȩֵ�����飬��lowcost[1]=10��ʾ��ʱ���Ӷ���vexs[1]�ıߵ���СȨֵΪ10��Ҫ�ǳɹ�������vexs[1]������С����������lowcost[1]��Ϊ0
//	int lowcost[MAXVEX];
//	//��ʼ������
//	//��vexs[0]�ĵ���Ϊ��ʼ��
//	for (int i = 0; i < G.Num_vex; i++)
//	{
//		adjvex[i] = 0;
//	}
//	for (int i = 0; i < G.Num_vex; i++)
//	{
//		lowcost[i] = G.arc[0][i];
//	}
//	//����vexs[0]�Ѿ���Ϊ��һ�������Ǹ���㲻��Ҫ�����ӵı�
//	lowcost[0] = 0;
//	//ѭ��һ���ҳ�һ�����㵽��С��������
//	//���ڶ���0�Ѿ���Ϊ��һ����С�������еĶ��㣬����i��0��ʼ
//	for (int i = 1; i < G.Num_vex; i++)
//	{
//		int min = INFINITY;
//		//��k��ʾ��ʱ���ҵ��ķ���������Ķ���vexs[k]
//		int k = 0;
//		for (int i = 1; i < G.Num_vex; i++)//ѭ�����ж���
//		{
//			if (lowcost[i] < min && lowcost[i] != 0)
//			{
//				min = lowcost[i];
//				k = i;
//			}
//		}
//		//�ҵ��˶���vexs[k]���Ͳ���Ҫ�������Ӷ���vexs[k]�ı��ˣ���lowcost[k]��Ϊ0��֮��㲻�ٸı䣬Ҳ���ڲ�������СȨֵ�Ĺ���
//		lowcost[k] = 0;
//		//�Ѿ��õ�����С��������һ���ߣ����Խ��д�ӡ
//		cout << "(" << G.vexs[adjvex[k]] << "," << G.vexs[k] << ")" << endl;
//		for (int i = 1; i < G.Num_vex; i++)//ѭ�����ж���
//		{
//			if (G.arc[k][i] < lowcost[i] && lowcost[i] != 0)
//			{
//				lowcost[i] = G.arc[k][i];
//				//�����˽���˵��lowcost�����д���ı߷����˸ı䣬������vexs[i]��˫�׷����˸ı䣬˫�ױ�Ϊ��vexs[k]
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
//int Vexset[N];//�������飬�����ų�Kruskal���ֻ������
////˼·����Vexset�����зֱ����v1��v2���ڵ���ͨ����vs1��vs2�������ж�
////1. ���vs1 != vs2 ���������㴦�ڲ�ͬ����ͨ����������˱ߣ��ϲ�vs1��vs2������ͨ����
////2. ���vs1��vs2��ȣ�������ѡ������������ͬһ����ͨ��������ô����ȥ�˱�ѡ����һ��Ȩֵ��С�ı�
//
//int minspatree_matrix[N][N];//��С���������ڽӾ���
//pair <int, int> ans[N];
//
///*�����Ƕ�����Sort������ʵ��*/
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
////��³˹�����㷨
//void MiniSpanTree_Kruskal(AMGraph& G)
//{
//	cout << "��³˹�����㷨���" << endl;
//	Sort(G);
//	int cnt = 0;
//	for (int i = 0; i < G.Num_vex; ++i) Vexset[i] = i;//��ʼʱ��ÿ����Ϊһ����������ͨ����                                                 
//	for (int i = 0; i < G.Num_arc; ++i)
//	{
//		//*���ѭ����������ģ�ѡ�ߵ�����ΪG.vexnum - 1
//		int v1 = Locate(G, Edge[i].Head);//���Ǳ������еı�
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