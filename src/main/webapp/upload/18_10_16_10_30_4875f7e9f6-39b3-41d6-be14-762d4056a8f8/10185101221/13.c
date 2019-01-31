#include <stdio.h>
int main()
{
    char *month[]={"January","February","March","April","May","June",
				   "July","August","September","October","November","December"};
    int i,day,year;
    scanf("%d%d%d",&i,&day,&year);

    if((day%10==1) && (day/10!=1))
        printf("%dst %s %d",day,month[i-1],year);
    else if((day%10==2) && (day/10!=1))
        printf("%dnd %s %d",day,month[i-1],year);
    else if((day%10==3) && (day/10!=1))
        printf("%drd %s %d",day,month[i-1],year);
    else
        printf("%dth %s %d",day,month[i-1],year);
    return 0;
}
