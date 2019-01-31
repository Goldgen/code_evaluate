#include<stdio.h>
int main()
{
    char c1,c2,c3;
    scanf("%c%c%c",&c1,&c3,&c2);
    if(c1==c2)
        printf("Tie");
    else
    {
        if((c1=='S'&&c2=='C')||(c1=='C'&&c2=='R')||(c1=='R'&&c2=='S'))
            printf("Alice");
        else
            printf("Bob");
    }

    return 0;

}
