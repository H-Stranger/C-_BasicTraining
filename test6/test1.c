//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//typedef char DataType;
//typedef struct BinaryTreeNode
//{
//	DataType x;
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//}BTN;
//
//
////前序遍历
//void Preorder(BTN* root)
//{
//	//树空则不打印
//	if (root == NULL)
//	{
//		return;
//	}
//	//先打印根再从左右子树递归
//	printf("%c ", root->x);
//	Preorder(root->left);
//	Preorder(root->right);
//
//}
////中序遍历
//void Inorder(BTN* root)
//{
//	//树空则不打印
//	if (root == NULL)
//	{
//		return;
//	}
//	//先左子树递归，再打印根，然后右子树递归
//	Inorder(root->left);
//	printf("%c ", root->x);
//	Inorder(root->right);
//}
////后序遍历
//void Backorder(BTN* root)
//{
//	//树空则不打印
//	if (root == NULL)
//	{
//		return;
//	}
//	//先左右子树递归再打印根
//	Backorder(root->left);
//	Backorder(root->right);
//	printf("%c ", root->x);
//}
//
////叶节点个数
//int leafSize(BTN* root)
//{
//	//根为NULL
//	if (root == NULL)
//	{
//		return 0;
//	}
//	//叶节点的两端为NULL
//	if (root->left == NULL && root->right == NULL)
//	{
//		return 1;
//	}
//	//其他正常节点则正常往下递归
//	return leafSize(root->left) + leafSize(root->right);
//}
//
////前序存储
//
///* 传size的地址是因为每次调用函数字符串赋值一次，size就要++，
//如果传形参则无法把size++运算的结果从左子树传到右子树调用的函数中（两函数同时调用的size） */
//BTN* CreatTree(char* str, int* size)
//{
//	//遇到#则为空
//	if (str[*size] == '#')
//	{
//		//指针继续往字符串后面移动
//		++(*size);
//		return NULL;
//	}
//	//创建树
//	BTN* root = (BTN*)malloc(sizeof(BTN));
//	if (root == NULL)
//	{
//		printf("malloc failed\n");
//		exit(-1);
//	}
//	//数组元素存在中子树
//	root->x = str[(*size)++];
//	//左子树和右子树继续递归赋值
//	root->left = CreatTree(str, size);
//	root->right = CreatTree(str, size);
//	return root;
//}
//
////销毁二叉树
//void DestroyTree(BTN* root)
//{
//	//根为NULL递归停止
//	if (root == NULL)
//	{
//		return;
//	}
//	//找到左右子树，不为空则free
//	DestroyTree(root->left);
//	DestroyTree(root->right);
//
//	free(root);
//	root = NULL;
//}
//
//int main()
//{
//	//创建输入的量
//	char str[30];
//	int size = 0;
//	scanf("%s", str);
//
//	BTN* root = CreatTree(str, &size);
//
//	Preorder(root);
//	printf("\n");
//	Inorder(root);
//	printf("\n");
//	Backorder(root);
//	printf("\n");
//
//
//	printf("二叉树有%d个叶节点\n", leafSize(root));
//
//	DestroyTree(root);
//	return 0;
//}