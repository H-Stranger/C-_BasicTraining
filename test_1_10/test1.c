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
// //������ջ��Ȼ����ջ��������Ԫ�����Ա�
//bool isPalindrome(struct ListNode* head) {
//    int* stack = (int*)malloc(sizeof(int) * 100000);//Ϊջ���ٿռ�
//    int top = 0;
//    //��head�����е�Ԫ�ش�ͷ��β���θ�ֵ��tmp
//    struct ListNode* tmp = head;
//    while (tmp)
//    {
//        stack[top++] = tmp->val;
//        tmp = tmp->next;
//    }
//    //һ����ջ��������һ��������ͷָ�����
//    while (top--)
//    {
//        if (stack[top] != head->val)
//        {
//            return false;
//        }
//        head = head->next;
//    }
//
//    free(stack);//�ͷ��ڴ�
//    return true;
//}
//
//
//bool isPalindrome(struct ListNode* head) {
//    int* stack = (int*)malloc(sizeof(int) * 100000);
//    int top = 0;
//    //������Բ��ô���tmp
//    while (head)
//    {
//        stack[top++] = head->val;
//        head = head->next;
//    }
//
//    //������β�жϷ�
//    int low = 0;
//    int high = top - 1;//β
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