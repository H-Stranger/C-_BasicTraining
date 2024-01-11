#define _CRT_SECURE_NO_WARNINGS
//有几个左括号就有几个右括号
int maxDepth(char* s) {
    int top = 0;
    int i;
    int ret = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            top++;//进栈
            if (top > ret)
                ret = top;
        }
        else if (s[i] == ')')
        {
            top--;//出栈
        }
    }
    return ret;
}