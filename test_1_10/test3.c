#define _CRT_SECURE_NO_WARNINGS
//�м��������ž��м���������
int maxDepth(char* s) {
    int top = 0;
    int i;
    int ret = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            top++;//��ջ
            if (top > ret)
                ret = top;
        }
        else if (s[i] == ')')
        {
            top--;//��ջ
        }
    }
    return ret;
}