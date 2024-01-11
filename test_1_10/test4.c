#define _CRT_SECURE_NO_WARNINGS
int* reverseBookList(struct ListNode* head, int* returnSize) {
    int* stack = (int*)malloc(sizeof(int) * 10000);
    int top = 0;
    //链表元素赋给栈
    while (head)
    {
        stack[top++] = head->val;
        head = head->next;
    }
    //从栈顶依次弹出元素
    int* ret = (int*)malloc(sizeof(int) * 10000);
    *returnSize = 0;
    //卡点,误认为top是在这个循环结束后才--的。只要top被调用一次，就--
    while (top--)
    {
        ret[(*returnSize)++] = stack[top];
    }

    free(stack);
    return ret;
}