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
//		cout << "��ѡ��0.�˳�		1.��������ͼ���ڽӱ�洢��		2.������ȱ���		3.������ȱ���" << endl;
//		cin >> choose;
//		switch (choose) {
//		case 1: {
//			CreateUDG(G);
//			printGraph(G); //��� 
//			break;
//		}
//		case 2: {
//			cout << "������ĸ����㿪ʼ����(��Ŵ�0��ʼ)��";
//			cin >> v1;
//			DFSTraverse(G, v1);
//			int visited[MAX];
//			for (int i = 0; i < G.vexnum; i++) {
//				visited[i] = 0; //��־������Ϣ��ʼ��
//			}
//			cout << endl;
//			break;
//		}
//		case 3: {
//			cout << "������ĸ����㿪ʼ����(��Ŵ�0��ʼ)��";
//			cin >> v2;
//			BFSTraverse(G, v2);
//			cout << endl;
//			break;
//		}
//		case 0:
//			cout << "�˳�" << endl;
//			return 0;
//		default:
//			cout << "�������������ѡ��" << endl;
//			break;
//		}
//	} while (choose);
//	
//    return 0;
//}
