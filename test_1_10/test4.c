#define _CRT_SECURE_NO_WARNINGS
int* reverseBookList(struct ListNode* head, int* returnSize) {
    int* stack = (int*)malloc(sizeof(int) * 10000);
    int top = 0;
    //����Ԫ�ظ���ջ
    while (head)
    {
        stack[top++] = head->val;
        head = head->next;
    }
    //��ջ�����ε���Ԫ��
    int* ret = (int*)malloc(sizeof(int) * 10000);
    *returnSize = 0;
    //����,����Ϊtop�������ѭ���������--�ġ�ֻҪtop������һ�Σ���--
    while (top--)
    {
        ret[(*returnSize)++] = stack[top];
    }

    free(stack);
    return ret;
}