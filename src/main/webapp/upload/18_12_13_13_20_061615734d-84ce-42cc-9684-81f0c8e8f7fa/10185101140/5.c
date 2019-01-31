#include <stdio.h>
void Number2Alpha(int num, char *mptr);

int main()
{
    int n;
    scanf("%d",&n);
    char *mptr = NULL;

    Number2Alpha(n, mptr);

    return 0;
}

void Number2Alpha(int num, char *mptr)
{
    if (num==1)
        mptr = "January";
    else if (num==2)
        mptr = "February";
    else if (num==3)
        mptr = "March";
    else if (num==4)
        mptr = "April";
    else if (num==5)
        mptr = "May";
    else if (num==6)
        mptr = "June";
    else if (num==7)
        mptr = "July";
    else if (num==8)
        mptr = "August";
    else if (num==9)
        mptr = "September";
    else if (num==10)
        mptr = "October";
    else if (num==11)
        mptr = "November";
    else
        mptr = "December";

    printf("%s",mptr);
    return;
}
