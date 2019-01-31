#include <stdio.h>
#include <string.h>
int main()
{
    char reversal[10][30],str[30];
    int n=0,i=0,j=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        gets(reversal[i]);
    }
    for (j=0;j<n-1;j++){
        for (i=j+1;i<n;i++)
        {
            if(strcmp(reversal[i] ,reversal[j])>0)
            {
                strcpy(str,reversal[i]);
                strcpy(reversal[i],reversal[j]);
                strcpy(reversal[j],str);
            }
        }
    }
    for(i=0;i<n-1;i++){
        printf("%s\n",reversal[i]);
    }
    printf("%s",reversal[i]);
    return 0;
}
