//#define _CRT_SECURE_NO_WARNINGS
//
//#define N 10
//#include <stdio.h>
////���������С��Ԫ���൱����������
////col��� row��С
//// row�����ʱ��arr[row][col]��֮��Ƚ�
////�������飬������������
// int Maxcol(int a[][N], int n, int row) {
//    int i, maxcol = 0;
//    for (i = 1; i < n; i++)
//        if (a[row][i] > a[row][maxcol]) maxcol = i;
//    return maxcol;
//}
//int Minrow(int a[][N], int m, int col) {
//    int i, minrow = 0;
//    for (i = 1; i < m; i++)
//        if (a[i][col] < a[minrow][col]) minrow = i;
//    return minrow;
//}
//int main() {
//    int m, n, i, j;
//    int maxcol, minrow;
//    int a[N][N];
//    scanf("%d%d", &m, &n);
//    for (i = 0; i < m; i++) for (j = 0; j < n; j++)
//        scanf("%d", &a[i][j]);
//    //��Ѱ��
//    for (i = 0; i < m; i++) {
//        maxcol = Maxcol(a, n, i);//�еĸ���
//        minrow = Minrow(a, m, maxcol);
//        
//        //�жϷ��ص����������С�������������Ƿ�͵�ǰ�����
//        if (i == minrow) {
//            printf("Array[%d][%d]=%d", i, maxcol, a[i][maxcol]);
//            break;
//        }
//    }
//    if (i >= m) printf("None");
//}
//
////�������̣�
////1.���ҵ�����i����������������������������
////2.��ͨ�������������ȥ��������е���С��������������������
////3.�ж������������Ƿ����i�У��ж����������������������С���Ƿ���ͬһ������
//
////i == minrow �ؼ������ж���