#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=0,j=1;
char a;
char data[8];
scanf("%c",&a);
while (j<=80)
{
    if (j<9) data[i]=a;
    scanf("%c",&a);
    ++j;++i;
    if (a=='\n') break;
}
for(int k=0;k<8;++k)
{
    if (data[k]=='a'||data[k]=='b'||data[k]=='c') printf("2");
    else if (data[k]=='d'||data[k]=='e'||data[k]=='f') printf("3");
    else  if (data[k]=='g'||data[k]=='h'||data[k]=='i')printf("4");
    else if (data[k]=='j'||data[k]=='k'||data[k]=='l') printf("5");
    else if (data[k]=='m'||data[k]=='n'||data[k]=='o') printf("6");
    else if (data[k]=='p'||data[k]=='q'||data[k]=='r'||data[k]=='s') printf("7");
    else if (data[k]=='t'||data[k]=='u'||data[k]=='v') printf("8");
    else if (data[k]=='w'||data[k]=='x'||data[k]=='y'||data[k]=='z') printf("9");
}
 }
