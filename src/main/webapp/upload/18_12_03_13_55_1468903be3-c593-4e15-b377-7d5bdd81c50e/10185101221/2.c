#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    getchar();
    char arr[t][31];
    char *pn[t];
    char *ptemp=NULL;
    for(int i=0;i<t;i++){
        gets(arr[i]);
        pn[i]=arr[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t-i-1;j++){
            if(strcmp(pn[j],pn[j+1])<0){
            ptemp=pn[j];
            pn[j]=pn[j+1];
            pn[j+1]=ptemp;
            }
        }
    }
    for(int i=0;i<t;i++)
        printf("%s\n",pn[i]);
    return 0;
}
