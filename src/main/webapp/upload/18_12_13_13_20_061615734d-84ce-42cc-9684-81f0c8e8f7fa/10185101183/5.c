#include <stdio.h>
#include <stdlib.h>
char *Number2Alpha(int num)
{
    char *mptr[]={"NOOUT",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December",
    };
    return mptr[num];
}

int main()
{
   int num;
   scanf("%d",&num);
   printf("%s",Number2Alpha(num));
}
