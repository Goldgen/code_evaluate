#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char s[80];
   scanf("%s",s);
  int l=strlen(s);
   int i;
 for(i=0;i<8;i++)
 { if(s[i]>='a'&&s[i]<='c')
	 printf("2");
    else if(s[i]>='d'&&s[i]<='f')
	   printf("3");
    else if(s[i]>='g'&&s[i]<='i')
		printf("4");
  else if(s[i]>='j'&&s[i]<='l')
	  printf("5");
  else if(s[i]>='m'&&s[i]<='o')
	  printf("6");
  else if(s[i]>='p'&&s[i]<='s')
	  printf("7");
  else if(s[i]>='t'&&s[i]<='v')
	  printf("8");
  else printf("9");
  	 
 }
	
}