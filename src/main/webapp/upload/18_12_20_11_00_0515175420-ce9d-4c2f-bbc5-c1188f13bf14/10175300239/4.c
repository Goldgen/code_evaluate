#include <stdio.h>
#include <stdlib.h>
void output(char arr[],int n);
int main()
{
    char a;
    int n=0;
    a=getchar();
    char arr[1000];
    while(a!='?'){
        arr[n]=a;
        n++;
        a=getchar();
    }
    arr[n]='\0';
    output(arr,n);
    return 0;
}
void output(char arr[],int n){
    if(n==1)
        printf("%c",*arr);
    else{
        output(arr+1,n-1);
        printf("%c",*arr);
    }
}
