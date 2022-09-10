#include <stdio.h>
// sum through functions
int sums(int a, int b);

int main()
{
    int a, b;
    printf("enter the first no\n");
    scanf("%d", &a);
    printf("enter the second no\n");
    scanf("%d", &b);
    int s = sums(a, b);
    printf("the sum is %d\n", s);
    return 0;
}

// function defination
int sums(int a, int b)
{
    return a + b;
}