#include<stdio.h>
int main(void)
{
    int a,b,c,f;
    char d,e;
    scanf("%d,%d,%d",&a,&b,&c);
    d=a;
       f=b%10;
   switch (f)
   {
       case 1:if(b!=11)printf("%d\st\0",b);else printf("11th\0");break;
       case 2:if(b!=12)printf("%d\nd\0",b);else printf("12th\0");break;
       case 3:if(b!=13)printf("%d\rd\0",b);else printf("13th\0");break;
       default :printf("%d\th",b);break;

   }
    switch(d)
    {
        case 1:printf("January\0");break;
        case 2:printf("February\0");break;
        case 3:printf("March\0");break;
        case 4:printf("April\0");break;
        case 5:printf("May\0");break;
        case 6:printf("June\0");break;
        case 7:printf("July\0");break;
        case 8:printf("August\0");break;
        case 9:printf("September\0");break;
        case 10:printf("October\0");break;
        case 11:printf("November\0");break;
        case 12:printf("December\0");break;
    }
    printf("%d",c);

    return 0;

}
