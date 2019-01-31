#include <stdio.h>
#include <stdlib.h>
int A(int a,int b){
if(a>b) return A(a-b,b);
if(a<b) return A(b-a,a);
if(a==b) return a;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",A(a,b));
    return 0;
}

