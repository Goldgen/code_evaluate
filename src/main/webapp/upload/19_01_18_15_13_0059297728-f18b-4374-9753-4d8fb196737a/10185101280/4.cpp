#include<stdio.h>


int main()
{
 char a;
 scanf("%c",&a);
 char b;
 b=a+'a'-'A';
 if(a>='A'&&a<='Z')
 {
     printf("%c",b);
 }

 else
    printf("ERROR");
    return 0;
}
