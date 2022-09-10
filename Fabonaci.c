#include <stdio.h>
int a;
unsigned long long list[10000000];
unsigned long long fib(unsigned long long a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }
    else if (list[a - 1] != 0)
    {
        return list[a - 1];
    }
    else
    {
        list[a - 1] = (fib(a - 1) + fib(a - 2));
        return list[a - 1];
    }
}
int main()
{
    // int a;
    printf("enter the no you want fibonacci of  - ");
    scanf("%d", &a);
    printf("The fibonacci of %d is %lld    \n", a, fib(a));
    return 0;
}