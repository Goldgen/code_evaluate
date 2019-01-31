#include <stdio.h>
#include <stdlib.h>

void Number2Alpha(int num, char* mptr)
{
    if(num==1)
        printf("January");
    else if(num==2)
        printf("February");
    else if(num==3)
        printf("March");
    else if(num==4)
        printf("April");
    else if(num==5)
        printf("May");
    else if(num==6)
        printf("June");
    else if(num==7)
        printf("July");
    else if(num==8)
        printf("August");
    else if(num==9)
        printf("September");
    else if(num==10)
        printf("October");
    else if(num==11)
        printf("November");
    else if(num==12)
        printf("December");
}

int main()
{
    int num=0;
    scanf("%d",&num);
    char mptr[30];
    Number2Alpha(num,mptr);
    return 0;
}
