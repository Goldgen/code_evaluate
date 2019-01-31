#include <stdio.h>
#include <math.h>
int main()
{
    char a,b;
    scanf("%c",&a);
	if(a>=65&&a<=90){
        b=a+'a'-'A';
        printf("%c",b);}
     else printf("ERROR");
    return 0;
}
