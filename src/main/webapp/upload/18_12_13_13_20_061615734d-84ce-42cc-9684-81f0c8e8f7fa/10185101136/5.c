#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char mon[12][20] = {"January", "February", "March", "April",
                          "May", "June", "July", "August",
                          "September", "October", "November", "December"};

char *Number2Alpha(int num, char *mptr);

int main()
{
    int n;
    char month[20];
    scanf("%d", &n);
    int i;
    for (i = 0; i < 20; ++i)
        month[i] = '\0';
    printf("%s", Number2Alpha(n, month));
    return 0;
}
char *Number2Alpha(int num, char *mptr)
{
    return mon[num - 1];
}
