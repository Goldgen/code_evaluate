#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 100
#define p ' '
typedef struct
{
    char word;
    int cnt;
} PAIR;

int index(char w, PAIR *pairs_, int n)
{

    int i;
    for(i=0; i<n; i++)
        if(strcmp(w,pairs_[i].word)==0) return i;
    return -1;
}
int main ()
{

    PAIR  pairs[N];
    char w;
    int i,n=0,idx;
    char s[110];
    char c;
    while ((c=getchar())!=p){
        if((idx = index(c,pairs,n))!=-1)
            pairs[idx].cnt++;
        else
        {
            strcpy(pairs[n].word,w);
            pairs[n++].cnt=1;
        }
    }
    int j;
    for(j=0;;j++)
    {
        printf("%c %d; ",pairs[j].word,pairs[j].cnt);
    }
     return 0;
}
