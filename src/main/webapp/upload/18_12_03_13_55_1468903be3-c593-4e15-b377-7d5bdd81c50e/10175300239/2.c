#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    getchar();
    char str[10][31];
    char temp[31];
    int max;
    for(i=0;i<n;i++){
        gets(str[i]);
    }
    for(i=0;i<n;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(strcmp(str[max],str[j])<0)
                max=j;
        }
        if(max!=i){
            strcpy(temp,str[max]);
            strcpy(str[max],str[i]);
            strcpy(str[i],temp);
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    return 0;
}