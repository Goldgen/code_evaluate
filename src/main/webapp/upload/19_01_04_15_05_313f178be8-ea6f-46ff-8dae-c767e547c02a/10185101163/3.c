#include <stdio.h>
#include <string.h>

int main()
{
    char A[1001],str[1001];
    int i,j,l,l0,cont=0;
    scanf("%s %s",&A,&str);
    getchar();
    l=strlen(str);
    l0=strlen(A);
    char com[l+1];
    for(i=0;i<l0-l;){
        for(j=0;j<l;j++){
            com[j]=A[i+j];
        }
        if(strcmp(com,str)==0){
            i=i+l;
            cont++;
        }
        if(strcmp(com,str)!=0){
            i++;
        }
    }
    printf("%d",cont);
}
