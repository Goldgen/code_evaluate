#include <stdio.h>
#include <string.h>
#include <malloc.h>
void get(char*a)
{
    while (1==scanf("%c",a)&&*a!=' '&&*a!='\n')a++;
    if(*a==' ')*a='\0';
}
char **input(int*a)
{
    char **p = (char**)malloc( 100 * sizeof(char*));
    int i,e,co=1;
    for (i=0;i<100;i++){
        p[i] = (char*)malloc(500 * sizeof(char));
        memset(p[i],'\0',500);
    }
    for(i=0;i<100;i++){
        get(p[i]);
        for(e=0;e<500;e++){
            if(p[i][e]=='\n'){
                co=0;
                p[i][e]='\0';
                *a=i+1;
                break;
            }
        }
        if(co==0)break;
    }
    return p;
}
void sort(char**p,int n)
{
    int i,e,m,co=1;
    char *tmp;
    for(i=0;i<n;i++){
        int b=strlen(p[i]);
        co=1;
        for (m=0;m<b;m++){
            if(!isupper(p[i][m]))co=0;
        }
        if(co==0)continue;
    for(e=i+1;e<n;e++){
        int a=strlen(p[e]);
        co=1;
        for (m=0;m<a;m++){
            if(!isupper(p[e][m]))co=0;
        }
        if(co==0)continue;
        if(strcmp(p[i],p[e])>0){
            tmp = p[i];
            p[i] = p[e];
            p[e] = tmp;
        }
    }
    }
}
void Free(char**p)
{
    int i;
    for (i=0;i<100;i++){
        free(p[i]);
    }
    free(p);
}
int main()
{
    int n=0,i=0,a,e;
    char**b;
    scanf("%d\n",&n);
    if(n>=1&&n<=10){
    while(i<n){
        b=input(&a);
        sort(b,a);
        printf("case #%d:\n",i);
        for (e=0;e<a;e++){
            if(e==a-1)printf("%s\n",b[e]);
            else printf("%s ",b[e]);
        }
        i++;
        Free(b);
    }
    }
    return 0;
}
