#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr1[81],arr2[81];
    char temp1[81],temp2[81];
    int a,b,i,j;
    char temp;
    scanf("%s %s",arr1,arr2);
    a=strlen(arr1);
    b=strlen(arr2);

    for(i=0; i<a; i++)
        temp1[i]=arr1[i];
    for(i=0; i<b; i++)
        temp2[i]=arr2[i];

    for(i=0; i<b; i++)
    {
        temp=arr2[0];
        for(j=0; j<b-1; j++)
        {
            arr2[j]=arr2[j+1];
        }
        arr2[b-1]=temp;
        
        if(strcmp(arr1,arr2)==0)
        {
            printf("\"%s\" is a rotation of \"%s\"",temp1,temp2);
            return 0;
        }
    }
    printf("\"%s\" is NOT a rotation of \"%s\"",temp1,temp2);
    return 0;
}