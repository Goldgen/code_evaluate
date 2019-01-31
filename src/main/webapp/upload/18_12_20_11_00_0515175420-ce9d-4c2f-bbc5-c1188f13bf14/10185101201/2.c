#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int stringalpha(char* a)
{
    int i,t=0;
    for(i=0;i<strlen(a);i++)
    {
        if(isalpha(*(a+i))==0)
            t++;
    if(t==0)
        return 1;
    else
        return 0;
    }
}
void Sort(char a[][20],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(stringalpha(a[j])){
                int m=1;
                while(!stringalpha(a[j+m]))
                {
                    m++;
                }
            if(strcmp(a[j],a[j+m])>0){
                char t[20];
                strcpy(t,a[j]);
                strcpy(a[j],a[j+m]);
                strcpy(a[j+m],t);
             }
           }
        }
    }
}
void main()
{
    int i,j,k,n,g;
    char a[15][20],c;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        j=0,k=0;
        while((c=getchar())!='\n')
        {
            if(c!=' ')
            {
                a[j][k]=c;
                    k++;
            }
            else
            {
                a[j][k]='\0';
                k=0;
                j++;
            }
        }
            a[j][k]='\0';
            Sort(a,j+1);
            printf("case #%d:\n",i);
            for(g=0;g<j+1;g++)
                {
                    printf("%s",a[g]);
                    if(g<j)
                        printf(" ");
                }
            if(i<n-1)
                printf("\n");
    }
}