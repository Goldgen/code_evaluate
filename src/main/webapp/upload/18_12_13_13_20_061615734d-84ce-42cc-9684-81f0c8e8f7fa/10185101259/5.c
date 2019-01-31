#include <stdio.h>
#include <stdlib.h>
void Number2Alpha(int num,char *p)
{   switch(num)
    {
        case 1: strcpy(p,"January");break;
        case 2: strcpy(p,"February");break;
        case 3:strcpy(p,"March");break;
        case 4:strcpy(p,"April");break;
        case 5:strcpy(p,"May");break;
        case 6:strcpy(p,"June");break;
        case 7:strcpy(p,"July");break;
        case 8:strcpy(p,"August");break;
        case 9:strcpy(p,"September");break;
        case 10:strcpy(p,"October");break;
        case 11:strcpy(p,"November");break;
        case 12:strcpy(p,"December");break;
        default: break;
    }
}
int main()
{   int num;
    char month[20];
    scanf("%d",&num);
    Number2Alpha(num,month);
    printf("%s",month);
    return 0;
}