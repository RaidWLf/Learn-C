#include <stdio.h>
#include <string.h>
void main()
{
    char s1[] = "bunty";
    char s3[17];
    char s2[] = "\nmanavaditya";
    puts(strcat(s1, s2));
    strcpy(s3, strcat(s1, s2));
    printf("\n");
    puts(s3);
}