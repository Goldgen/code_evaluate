#include<stdio.h>
int main()
{int a,b,c;
 scanf("%d %d",&a,&b);
 for(c = a ; c > 0 ; c --)
 {if(b%c==0 && a%c==0)
    {printf("最大公约数是: %d",c);
    break;
    }
 }
 
return 0;
 } 