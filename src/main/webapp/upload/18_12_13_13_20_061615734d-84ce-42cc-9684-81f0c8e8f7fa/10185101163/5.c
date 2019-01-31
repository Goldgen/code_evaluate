#include <stdio.h>
#include <string.h>

void Number2Alpha(int num, char* mptr){
    switch(num){
    case 1: strcpy(mptr,"January");break;
    case 2: strcpy(mptr,"February");break;
    case 3: strcpy(mptr,"March");break;
    case 4: strcpy(mptr,"April");break;
    case 5: strcpy(mptr,"May");break;
    case 6: strcpy(mptr,"June");break;
    case 7: strcpy(mptr,"July");break;
    case 8: strcpy(mptr,"August");break;
    case 9: strcpy(mptr,"September");break;
    case 10: strcpy(mptr,"October");break;
    case 11: strcpy(mptr,"November");break;
    case 12: strcpy(mptr,"December");break;
		default:break;
    }
}
int main()
{
    int n;
    char p[20];
    scanf("%d",&n);
    Number2Alpha(n,p);
    puts(p);
    return 0;
}
