//#define _CRT_SECURE_NO_WARNINGS
//
//#define N 10
//#include <stdio.h>
////行最大列最小的元素相当于数组里面
////col最大 row最小
//// row不变的时候，arr[row][col]列之间比较
////传入数组，列数，所在行
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
//    //行寻找
//    for (i = 0; i < m; i++) {
//        maxcol = Maxcol(a, n, i);//列的个数
//        minrow = Minrow(a, m, maxcol);
//        
//        //判断返回的行最大列最小的数的行索引是否和当前行相等
//        if (i == minrow) {
//            printf("Array[%d][%d]=%d", i, maxcol, a[i][maxcol]);
//            break;
//        }
//    }
//    if (i >= m) printf("None");
//}
//
////程序流程：
////1.先找到数组i行里面最大的数，返回它的列索引
////2.再通过这个列索引，去找数组该列的最小的数，返回它的行索引
////3.判断它的行索引是否等于i行（判断数组里面行最大数和列最小数是否是同一个数）
//
////i == minrow 关键在于判断完