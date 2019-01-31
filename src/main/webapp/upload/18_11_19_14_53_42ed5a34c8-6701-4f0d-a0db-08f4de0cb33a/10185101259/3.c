#include <stdio.h>
#include <stdlib.h>
int flag=0;
int fan(){
int num;
scanf("%d",&num);
if(num>0)
fan();
else{
flag=1;
return;}
if(flag){
printf("%d",num);
flag=0;}
else
printf(" %d",num);
}
int main()
{
  fan();

return 0;}
