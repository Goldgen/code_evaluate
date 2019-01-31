#include<stdio.h>
#include<math.h>

int tentwo(int);

int main(void)
{
    int num=0;
    scanf("%d",&num);
    tentwo(num);
    return 0;
}

int tentwo(int ten)
{
    if(ten>0){
        tentwo(ten/2);
        printf("%d",ten%2);
    }
}
