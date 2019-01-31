#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct letter
{
    int cnt;
    char let;
};
typedef struct letter letter;

int main(void)
{
    int i = 0;
    int n = 0;
    int t = 0;
    int q = 0;
    char str[101];
    letter* alp[100];
    for(i=0;i<100;i++)
    {
        alp[i] = (letter*)malloc(sizeof(letter*));
    }
    gets(str);
    n = strlen(str)-1;
    for(i=0;i<=n;i++)
    {
        for(t=0;t<q;t++)
        {
            if(str[i]==alp[t]->let)
            {
                alp[t]->cnt++;
                break;
            }
        }
        if (t==q)
        {
            q++;
            alp[t]->let = str[i];
            alp[t]->cnt = 1;
        }
    }
    for(t=0;t<q;t++)
    {
        if(alp[t]->let!=' ')
        printf("%c %d; ",alp[t]->let,alp[t]->cnt);
    }
}
