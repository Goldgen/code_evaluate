#include<stdio.h>
int main()
{
char X;
char A='a';
char Z='z';
char I='i';
char E='e';
char O='o';
char U='u';
scanf("%c",&X);
if(X==A||X==E||X==I||X==O||X==U)
X=1;
else if(X>=A&&X<=Z)
X=2;
else
X=3;
switch(X)
{case 1:
printf("vowel");
break;
case 2:
printf("consonant");
break;
case 3:
printf("ERROR");
break;
default:
break;}
return 0;


}