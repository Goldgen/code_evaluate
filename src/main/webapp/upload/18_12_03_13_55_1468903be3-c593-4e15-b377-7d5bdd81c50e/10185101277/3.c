#include<stdio.h>
#include<string.h>
#define SIZE 85

int i,j;

int main()
{
    char a[SIZE],b[SIZE];
    char *a1,*b1;
    scanf("%s",a);
    scanf("%s",b);
    a1=&a[0];
    b1=&b[0];
    int numa=strlen(a);
    int numb=strlen(b);
    int flag=numb;
    if(numa<numb){
        flag=numa;
    }
    for(i=0;i<flag;i++){
        printf("%c",*a1);
        printf("%c",*b1);
        a1++;
        b1++;
    }
    if(numa<numb){
        for(i=flag;i<numb;i++){
            printf("%c",b[i]);
        }
    }
    else{
        for(i=flag;i<numa;i++){
            printf("%c",a[i]);
        }
    }


    return 0;
}