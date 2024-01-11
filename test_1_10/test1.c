//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//
// //单纯用栈，然后用栈顶和链表元素做对比
//bool isPalindrome(struct ListNode* head) {
//    int* stack = (int*)malloc(sizeof(int) * 100000);//为栈开辟空间
//    int top = 0;
//    //将head链表中的元素从头到尾依次赋值给tmp
//    struct ListNode* tmp = head;
//    while (tmp)
//    {
//        stack[top++] = tmp->val;
//        tmp = tmp->next;
//    }
//    //一个从栈顶出发，一个从链表头指针出发
//    while (top--)
//    {
//        if (stack[top] != head->val)
//        {
//            return false;
//        }
//        head = head->next;
//    }
//
//    free(stack);//释放内存
//    return true;
//}
//
//
//bool isPalindrome(struct ListNode* head) {
//    int* stack = (int*)malloc(sizeof(int) * 100000);
//    int top = 0;
//    //这里可以不用创建tmp
//    while (head)
//    {
//        stack[top++] = head->val;
//        head = head->next;
//    }
//
//    //数组首尾判断法
//    int low = 0;
//    int high = top - 1;//尾
//
//    while (low < high)
//    {
//        if (stack[low] != stack[high])
//            return false;
//        high--;
//        low++;
//    }
//
//    free(stack);
//    return true;
//}