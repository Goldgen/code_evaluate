#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void reverse(char str[],int n);
int main()
{
    char str[100];
    int i=0;
   while(1){
    str[i]=getchar();
    if(str[i]=='?')
        break;
    i++;
   }


    reverse(str,i);
  return 0;
}
void reverse(char str[],int n){
int i=n;
if(i==1)
    printf("%c",str[0]);
else
{
    printf("%c",str[i-1]);
    reverse(str,i-1);

}
}
