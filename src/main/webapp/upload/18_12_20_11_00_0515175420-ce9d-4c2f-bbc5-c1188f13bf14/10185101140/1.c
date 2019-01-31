#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OneMaxLen 40

char **Input(int n);
void Sort(char **a, int n);
void Free(char **a, int n);

int main()
{
    char **p;
    int n, i;
    scanf("%d",&n); getchar();

    p = Input(n);

    Sort(p,n);

    for(i=0; i<n; i++)
        printf("%s\n",p[i]);

    Free(p,n);
    return 0;
}

char **Input(int n)
{
    char buf[OneMaxLen];
    char **ps = calloc(n, sizeof(char*));
    char *ptr = NULL;
    int i;
    for (i=0; i<n; i++){
        ptr = gets(buf);
        ps[i] = malloc(OneMaxLen);
        strcpy(ps[i], buf);
    }
    return ps;
}

void Sort(char **a, int n)
{
    int i, j; char *temp = NULL;
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (strcmp(a[j],a[i])<0){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return;
}

void Free(char **a, int n)
{
    int i;
    for (i=0; i<n; i++){
        free(*(a+i));
    }
    return;
}
