#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 30

int main()
{
    int n;
    scanf("%d",&n);getchar();
    char des[n][ARRA_SIZE];

    char temp[ARRA_SIZE];
    int i, j;
    for (i=0; i<n; i++){
        gets(des[i]);
    }
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (strcmp(des[j],des[i])>0){
                strcpy(temp,des[i]);
                strcpy(des[i],des[j]);
                strcpy(des[j],temp);
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%s\n",des[i]);
    }
    return 0;
}
