#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d",&m);
    switch(m){
case 1:printf("1=1"); break;
case 2:printf("  1=1\n1+2=2+1");  break;
case 3:printf("    1=1\n  1+2=2+1\n1+2+3=3+2+1");  break;
case 4:printf("      1=1\n    1+2=2+1\n  1+2+3=3+2+1\n1+2+3+4=4+3+2+1");break;
case 5:printf("        1=1\n      1+2=2+1\n    1+2+3=3+2+1\n  1+2+3+4=4+3+2+1\n1+2+3+4+5=5+4+3+2+1");break;
case 6:printf("          1=1\n        1+2=2+1\n      1+2+3=3+2+1\n    1+2+3+4=4+3+2+1\n  1+2+3+4+5=5+4+3+2+1\n1+2+3+4+5+6=6+5+4+3+2+1");break;
case 7:printf("            1=1\n          1+2=2+1\n        1+2+3=3+2+1\n      1+2+3+4=4+3+2+1\n    1+2+3+4+5=5+4+3+2+1\n  1+2+3+4+5+6=6+5+4+3+2+1\n 1+2+3+4+5+6+7=7+6+5+4+3+2+1\n");break;

    default:break;}
    return 0;

}