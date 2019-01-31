#include <stdio.h>
#include <stdlib.h>
int bitSum(int);
int main()
{
    int x=0;
    scanf("%d",&x);
    printf("%d",bitSum(x));
    return 0;
}
int bitSum(int x){
    int sum=0;
    if(x>0){
       sum=bitSum(x/10)+x%10;
    }
    else return sum;
}
