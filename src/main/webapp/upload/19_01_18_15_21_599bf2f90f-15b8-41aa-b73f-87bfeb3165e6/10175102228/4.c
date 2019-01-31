#include<stdio.h>
#include<stdlib.h>
int main()
{ char c;
 scanf("%c",&c);
 if(c>='A'&&c<='Z')
 { printf("%c",c+32);

 }
 else printf("ERROR");
return 0;
}

