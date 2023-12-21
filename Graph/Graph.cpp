#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include"Graph.h"
using namespace std;


int LocateVex(ALGraph G, int u) {
    //��ͼG�в��Ҷ���u�������򷵻ض�����е��±ꣻ���򷵻�-1
    int i;
    for (i = 1; i <= G.vexnum; i++)
        if (u == G.vertices[i].data)
            return i;
    return -1;
}

//��������ͼG 
bool CreateUDG(ALGraph& G) {


    cout << "�������ܽ�������ܱ�����" << endl;
    cin >> G.vexnum >> G.arcnum;//�����ܶ��������ܱ���
    cout << "������������ֵ�� " << endl;
    for (int i = 1; i <= G.vexnum; i++)
    {//��������㣬�����ͷ���� 
        cin >> G.vertices[i].data;//���붥��ֵ 
        G.vertices[i].firstarc = NULL;//��ʼ����ͷ����ָ����
    }
    getchar();
    //������ߣ������ڽӱ�

    cout << "����һ������������������ֵ" << endl;
    for (int k = 1; k <= G.arcnum; k++) {
        char v1, v2;
        cin >> v1 >> v2;    //����һ������������������ 
        getchar();

        int i = LocateVex(G, v1);
        int j = LocateVex(G, v2); //ȷ��������G.vertices�е����

        ArcNode* p1 = new ArcNode;  //����һ���µı߽��*p1
        p1->adjvex = j;  //�ڽӵ����Ϊj 

        //ͷ�巨���½��*p1���붥��vi�ı߱�ͷ�� 
        p1->nextarc = G.vertices[i].firstarc;
        G.vertices[i].firstarc = p1;
        
        ArcNode* p2 = new ArcNode;
        p2->adjvex = i;  //�ڽӵ����Ϊi

        //ͷ�巨����p2 ,��Ϊ�������������������� 
        p2->nextarc = G.vertices[j].firstarc;
        G.vertices[j].firstarc = p2;
    }
    return true;
}
//����ڽӱ�
void printGraph(ALGraph G)
{
    int i;
    ArcNode* p;
    cout << "����ڽӱ� " << endl;
    for (i = 1; i <= G.vexnum; i++)
    {
        cout << G.vertices[i].data;
        for (p = G.vertices[i].firstarc; p != NULL; p = p->nextarc)
            printf("->%d", p->adjvex);
        cout << endl;
    }
}

//������ȱ���
void DFSTraverse(ALGraph G, int v) 
{
    int visited[MAX];
    ArcNode* p; //������� 
    cout << "(" << v << "," << G.vertices[v].data << ")" << ' '; //���������Ϣ 
    visited[v] = 1;
    p = G.vertices[v].firstarc; //���ʵ�v������

    while (p != NULL) {
        if (visited[p->adjvex] == 0) {
            DFSTraverse(G, p->adjvex);
        }
        p = p->nextarc;
    }
}

//������ȱ���
void BFSTraverse(ALGraph G, int v) {
    int i, j,visited[MAX]; //������������־���� 
    ArcNode* p; //������� 
    int queue[MAX], front = 0, rear = 0; //����ѭ������  

    for (i = 0; i < G.vexnum; i++) {
        visited[i] = 0; //��־������Ϣ��ʼ�� 
    }
    cout << "(" << v << "," << G.vertices[v].data << ")" << ' '; //���������Ϣ 
    visited[v] = 1; //��Ӧ����ı�־��Ϊ1 
    rear = (rear + 1) % MAX; //��βָ����� 
    queue[rear] = v; //���ҵĶ����Ӧ�������� 
   
    //ѭ������ 
    while (front != rear) {
        front = (front + 1) % MAX; //��ͷָ�����
        j = queue[front]; //�Ӷ�����ȡ�������Ӧ��� 
        p = G.vertices[j].firstarc; //ȡ��Ӧ��ŵĶ�����Ϣ 

        while (p != NULL) {
            if (visited[p->adjvex] == 0) {
                visited[p->adjvex] = 1;
                cout << "(" << p->adjvex << "," << G.vertices[p->adjvex].data << ")" << ' '; //���������Ϣ 
                rear = (rear + 1) % MAX; //��βָ����� 
                queue[rear] = p->adjvex; //���ҵĶ����Ӧ��������
            }
            p = p->nextarc;
        }
    }
}


