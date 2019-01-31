#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** Input(int n)
{
    char** p = NULL;
    p = (char**)malloc(n * sizeof(char*));
    for(int i = 0;i < n;i++){
        p[i] = (char*)malloc(35*sizeof(char));
        gets(p[i]);
    }
    return p;
}

void Free(char** a, int n)
{
    for(int js = 0;js < n;js++){
        free(*a+js);
    }
}

void Sort(char** a, int n)
{
    int js2 = 0, js3 = 0, js4 = 1;
    char temp[35] = "\0";
    while(js3 != js4){
        js3 = js4;
        for(js2 = 0;js2 < n-1;js2++){
            if(strcmp(*(a+js2),*(a+js2+1)) > 0){
                strcpy(temp,*(a+js2));
                strcpy(*(a+js2),*(a+js2+1));
                strcpy(*(a+js2+1),temp);
                js4++;
            }
        }
    }
}

int main(void)
{
    char** p;
    int n,i;
    scanf("%d",&n);
    getchar();
    p =Input(n);
    Sort(p,n);
    for(i = 0;i < n;i++){
        printf("%s\n",p[i]);
    }
    Free(p,n);
    return 0;
}
