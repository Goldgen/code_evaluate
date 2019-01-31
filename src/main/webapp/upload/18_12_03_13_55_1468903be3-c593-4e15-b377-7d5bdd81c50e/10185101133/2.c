#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int i=0,j=0;
    char s[10][31];
    char tmp[31];
    scanf("%d",&n);
    getchar();
    while(i<n){
        gets(s[i]);
        i++;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(s[j],s[j+1])>0){
                strcpy(tmp,s[j+1]);
                strcpy(s[j+1],s[j]);
                strcpy(s[j],tmp);
            }
        }
    }
    for(i=n-1;i>=0;i--){
        printf("%s",s[i]);
        if(i!=0)
            printf("\n");}
    return 0;
}
