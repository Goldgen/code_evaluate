#include <stdio.h>
#include <stdlib.h>
void  H(int num){
if(num==0)
return;
else{
 H(num/2);
printf("%d",num%2);
}

            }


int main()
{
    int a;
    scanf("%d",&a);
    H(a);
    return 0;
}
