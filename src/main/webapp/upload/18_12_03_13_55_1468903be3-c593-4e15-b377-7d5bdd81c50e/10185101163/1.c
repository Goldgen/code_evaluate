#include <stdio.h>
#include <stdlib.h>
int Tran(char n){
    if((n>=97)&&(n<=99)) return 2;
    if((n>=100)&&(n<=102)) return 3;
    if((n>=103)&&(n<=105)) return 4;
    if((n>=106)&&(n<=108)) return 5;
    if((n>=109)&&(n<=111)) return 6;
    if((n>=112)&&(n<=115)) return 7;
    if((n>=116)&&(n<=118)) return 8;
    if((n>=119)&&(n<=122)) return 9;
}
int main()
{
    char Arr[80];
    scanf("%s",&Arr);
    int i;
    for(i=0;i<8;i++) printf("%d",Tran(Arr[i]));
    return 0;
}
