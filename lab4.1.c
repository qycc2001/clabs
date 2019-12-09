#include <stdio.h>
void printtop(void)
{
    if (op > 0)
    printf("%g\n",val[op - 1]);
    else
    print("error.stack empty\n");
}
double copy(void)
{
    double n;
    if (op > 0)
    {
        push(n = val[op - 1]);
        return n;
    }
    else
    {
        printf("error.stack empty\n");
        return 0.0
    }
}
int swop()
{
    double t;
    if (op > 1)
    {
        t = val[op - 1];
        val[op - 1] = val[op - 2];
        val[op - 2] = t;
        return 1;
    }
    else
    {
        prinft("the number of elements in the stack is insufficient\n");
        return 0;
    }
}
int clear()
{
    int n;
    if(op > 0)
    {
        n = op;
        op = 0;
        return n;
    }
    else
    {
        printf("error.stack empty\n");
        return 0;
    }
}