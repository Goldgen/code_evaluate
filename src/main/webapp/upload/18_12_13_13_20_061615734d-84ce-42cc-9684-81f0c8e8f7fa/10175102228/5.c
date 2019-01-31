#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Number2Alpha(int num, char* mptr)
{  if(num==1)strcpy(mptr,"January");
    if(num==2)strcpy(mptr,"February");
    if(num==3)strcpy(mptr,"March");
    if(num==4)strcpy(mptr,"April");
    if(num==5)strcpy(mptr,"May");
    if(num==6)strcpy(mptr,"June");
    if(num==7)strcpy(mptr,"July");
    if(num==8)strcpy(mptr,"August");
    if(num==9)strcpy(mptr,"September");
    if(num==10)strcpy(mptr,"October");
    if(num==11)strcpy(mptr,"November");
    if(num==12)strcpy(mptr,"December");
    
}
int main()
{ int n;
scanf("%d",&n);
char s[12];
Number2Alpha(n,s);
printf("%s",s);
return 0;
}