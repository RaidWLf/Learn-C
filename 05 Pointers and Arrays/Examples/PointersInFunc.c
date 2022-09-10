#include <stdio.h>

void swap(int *px, int *py); // a func having two parameters *px and *py as pointer

int main()
{
    int a = 5;
    int b = 7;

    swap(&a, &b); // calling funct and passing address of the variable as argument
    printf("%d\t%d\n", a, b);
}

void swap(int *px, int *py)
{ // funct to swap the values of two variables
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}