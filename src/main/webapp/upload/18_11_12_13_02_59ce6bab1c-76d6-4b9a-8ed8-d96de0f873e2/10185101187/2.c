#include <stdio.h>

int pri(int i, int j)
{
    char c;
    int x=0;
    for(; i<j; i++)
    {
    c = i;
    if(i<100 && i>32)
        {
            x++;
            printf("%d      %c\n", i, c);
        }
    else if(i>=100 && i<127)
        {
            x++;
            printf("%d     %c\n", i, c);
        }
    }
    c = j;
    if(j<100 && j>32)
        {
            x++;
            printf("%d      %c", j, c);
        }
    else if(j>=100 && j<127)
        {
            x++;
            printf("%d     %c", j, c);
        }
    if(x==0)
        printf("NONE");
}

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    pri(i,j);
}
