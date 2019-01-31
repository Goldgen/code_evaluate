#include <stdio.h>
#include <stdlib.h>
char* i2a(char* p,int n)
{
    int a=0;
    char temp[100];
    for(a=0;n>0;a++){
        temp[a]=n%10+'0';
        n/=10;
    }
    for(int i=0;i<a;i++)
        p[a-1-i]=temp[i];
        return p;
}
int main()
{
    int i=0;
    scanf("%d",&i);
    char arr[100];
    i2a(arr,i);
    printf("%s",arr);
    return 0;
}
