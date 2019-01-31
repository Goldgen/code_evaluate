#include <stdio.h>
#include <stdlib.h>

void Number2Alpha(int num,char mptr);
int main()
{
    int m;
    scanf("%d",&m);
    char ptr[100] = {'\0'};
    Number2Alpha(m,ptr);
    return 0;
}

void Number2Alpha(int num,char mptr)
{
    char *p = mptr;
    switch(num)
    {
        case 1:
            p = "January";
            break;
        case 2:
            p = "February";
            break;
        case 3:
            p = "March";
            break;
        case 4:
            p = "April";
            break;
        case 5:
            p = "May";
            break;
        case 6:
            p = "June";
            break;
        case 7:
            p = "July";
            break;
        case 8:
            p = "August";
            break;
        case 9:
            p = "September";
            break;
        case 10:
            p = "October";
            break;
        case 11:
            p = "November";
            break;
        default:
            p = "December";
            break;
    }
    printf("%s",p);
}
