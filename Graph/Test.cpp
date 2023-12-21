//#define _CRT_SECURE_NO_WARNINGS
//#include"Graph.h"
//using namespace std;
//
//int main()
//{
//    ALGraph G;
//	int v1, v2, choose;
//
//	do
//	{
//		cout << "请选择：0.退出		1.创建无向图（邻接表存储）		2.深度优先遍历		3.广度优先遍历" << endl;
//		cin >> choose;
//		switch (choose) {
//		case 1: {
//			CreateUDG(G);
//			printGraph(G); //输出 
//			break;
//		}
//		case 2: {
//			cout << "输入从哪个顶点开始遍历(序号从0开始)：";
//			cin >> v1;
//			DFSTraverse(G, v1);
//			int visited[MAX];
//			for (int i = 0; i < G.vexnum; i++) {
//				visited[i] = 0; //标志数组信息初始化
//			}
//			cout << endl;
//			break;
//		}
//		case 3: {
//			cout << "输入从哪个顶点开始遍历(序号从0开始)：";
//			cin >> v2;
//			BFSTraverse(G, v2);
//			cout << endl;
//			break;
//		}
//		case 0:
//			cout << "退出" << endl;
//			return 0;
//		default:
//			cout << "输入错误，请重新选择！" << endl;
//			break;
//		}
//	} while (choose);
//	
//    return 0;
//}
