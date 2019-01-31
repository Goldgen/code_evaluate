#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char arr1[80],arr2[80];
    int length1,length2,i=0,n;
    scanf("%s %s",arr1,arr2);
    length1=strlen(arr1);
    length2=strlen(arr2);
    n=length1+length2;
    int chang;
    if(length1>=length2)
        chang=length2;
    else
        chang=length1;

    for(i; i<chang; i++)
    {
        printf("%c",arr1[i]);
        printf("%c",arr2[i]);
    }
    if(chang<length1)
    {
        for(i=chang; i<length1; i++)
            printf("%c",arr1[i]);
    }
    else if(chang<length2)
    {
        for(i=chang; i<length2; i++)
            printf("%c",arr2[i]);
    }
}
