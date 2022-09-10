#include <stdio.h>

#define IN 1  // Inside the word
#define OUT 0 // Outside the word

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("Total no. of lines are %d \n Total no. of words are %d\n Total no. of characters are %d", nl, nw, nc);
    return 0;
}