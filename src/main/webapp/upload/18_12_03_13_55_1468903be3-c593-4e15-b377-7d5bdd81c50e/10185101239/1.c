
#include <stdio.h>
int main()
{char ch[100];
int i;
scanf("%s",ch);
for(i=0;i<8;i++){
switch (ch[i]){
case 'a':printf("2");break;
case 'b':printf("2");break;
case 'c':printf("2");break;
case 'd':printf("3");break;
case 'e':printf("3");break;
case 'f':printf("3");break;
case 'g':printf("4");break;
case 'h':printf("4");break;
case 'i':printf("4");break;
case 'j':printf("5");break;
case 'k':printf("5");break;
case 'l':printf("5");break;
case 'm':printf("6");break;
case 'n':printf("6");break;
case 'o':printf("6");break;
case 'p':printf("7");break;
case 'q':printf("7");break;
case 'r':printf("7");break;
case 's':printf("7");break;
case 't':printf("8");break;
case 'u':printf("8");break;
case 'v':printf("8");break;
case 'w':printf("9");break;
case 'x':printf("9");break;
case 'y':printf("9");break;
case 'z':printf("9");break;
default:break;}}
 return 0;}