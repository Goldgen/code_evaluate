#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
    char str[100][200],c=' ';
    int x=0,flag[100]={0};
    char *p[100],*t;
    while(c==' '){
        scanf("%s",str[x]);
        c=getchar();
        p[x]=str[x];
        x++;
    }
    for(int j=0;j<x;j++){
        for(int k=0;k<strlen(str[j]);k++){
            if(str[j][k]<'A'||str[j][k]>'Z')
                flag[j]++;
        }
    }
    for(int j=0;j<x-1;j++){
        for(int k=j+1;k<x;k++){
            if(!flag[j]&&!flag[k]){
                if(strcmp(p[j],p[k])>0){
                    t=p[j];
                    p[j]=p[k];
                    p[k]=t;
                }
            }
        }
    }
            printf("case #%d:\n",i);
    for(int j=0;j<x;j++){
        if(j)
            printf(" ");
        printf("%s",p[j]);
    }
        printf("\n");
}
}
