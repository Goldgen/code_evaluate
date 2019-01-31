#include <stdio.h>


int main()
{
   int a=0,b=0,c=0;
   scanf("%d %d %d",&b,&a,&c);

   if(a%10==1&&a!=11)
    printf("%dst ",a);
   else if(a%10==2&&a!=12)
    printf("%dnd ",a);
   else if(a%10==3&&a!=13)
    printf("%drd ",a);
   else
    printf("%dth ",a);


   switch(b)
   {
        case 1:
             printf("January");
             break;
        case 2:
             printf("February");
             break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            break;
            }
    printf(" %d",c);

}
