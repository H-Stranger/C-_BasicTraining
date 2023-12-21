#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include"Graph.h"
using namespace std;


int LocateVex(ALGraph G, int u) {
    //在图G中查找顶点u，存在则返回顶点表中的下标；否则返回-1
    int i;
    for (i = 1; i <= G.vexnum; i++)
        if (u == G.vertices[i].data)
            return i;
    return -1;
}

//创建无向图G 
bool CreateUDG(ALGraph& G) {


    cout << "请输入总结点数和总边数：" << endl;
    cin >> G.vexnum >> G.arcnum;//输入总顶点数，总边数
    cout << "请输入各顶点的值： " << endl;
    for (int i = 1; i <= G.vexnum; i++)
    {//输入各顶点，构造表头结点表 
        cin >> G.vertices[i].data;//输入顶点值 
        G.vertices[i].firstarc = NULL;//初始化表头结点的指针域
    }
    getchar();
    //输入各边，构造邻接表

    cout << "输入一条边依附的两个顶点值" << endl;
    for (int k = 1; k <= G.arcnum; k++) {
        char v1, v2;
        cin >> v1 >> v2;    //输入一条边依附的两个顶点 
        getchar();

        int i = LocateVex(G, v1);
        int j = LocateVex(G, v2); //确定顶点在G.vertices中的序号

        ArcNode* p1 = new ArcNode;  //生成一个新的边结点*p1
        p1->adjvex = j;  //邻接点序号为j 

        //头插法将新结点*p1插入顶点vi的边表头部 
        p1->nextarc = G.vertices[i].firstarc;
        G.vertices[i].firstarc = p1;
        
        ArcNode* p2 = new ArcNode;
        p2->adjvex = i;  //邻接点序号为i

        //头插法插入p2 ,因为是无向网，所以是两条 
        p2->nextarc = G.vertices[j].firstarc;
        G.vertices[j].firstarc = p2;
    }
    return true;
}
//输出邻接表
void printGraph(ALGraph G)
{
    int i;
    ArcNode* p;
    cout << "输出邻接表： " << endl;
    for (i = 1; i <= G.vexnum; i++)
    {
        cout << G.vertices[i].data;
        for (p = G.vertices[i].firstarc; p != NULL; p = p->nextarc)
            printf("->%d", p->adjvex);
        cout << endl;
    }
}

//深度优先遍历
void DFSTraverse(ALGraph G, int v) 
{
    int visited[MAX];
    ArcNode* p; //辅助结点 
    cout << "(" << v << "," << G.vertices[v].data << ")" << ' '; //输出顶点信息 
    visited[v] = 1;
    p = G.vertices[v].firstarc; //访问第v个顶点

    while (p != NULL) {
        if (visited[p->adjvex] == 0) {
            DFSTraverse(G, p->adjvex);
        }
        p = p->nextarc;
    }
}

//广度优先遍历
void BFSTraverse(ALGraph G, int v) {
    int i, j,visited[MAX]; //辅助变量、标志数组 
    ArcNode* p; //辅助结点 
    int queue[MAX], front = 0, rear = 0; //定义循环队列  

    for (i = 0; i < G.vexnum; i++) {
        visited[i] = 0; //标志数组信息初始化 
    }
    cout << "(" << v << "," << G.vertices[v].data << ")" << ' '; //输出顶点信息 
    visited[v] = 1; //对应顶点的标志置为1 
    rear = (rear + 1) % MAX; //队尾指针后移 
    queue[rear] = v; //查找的顶点对应序号入队列 
   
    //循环遍历 
    while (front != rear) {
        front = (front + 1) % MAX; //队头指针后移
        j = queue[front]; //从队列中取出顶点对应序号 
        p = G.vertices[j].firstarc; //取对应序号的顶点信息 

        while (p != NULL) {
            if (visited[p->adjvex] == 0) {
                visited[p->adjvex] = 1;
                cout << "(" << p->adjvex << "," << G.vertices[p->adjvex].data << ")" << ' '; //输出顶点信息 
                rear = (rear + 1) % MAX; //队尾指针后移 
                queue[rear] = p->adjvex; //查找的顶点对应序号入队列
            }
            p = p->nextarc;
        }
    }
}


