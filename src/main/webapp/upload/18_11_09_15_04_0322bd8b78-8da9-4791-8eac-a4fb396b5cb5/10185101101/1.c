#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alice,bob;
    scanf("%c %c",&alice,&bob);
    if(alice==bob)
        printf("Tie");
    else{
    switch(alice){
    case'S':if(bob=='R'){printf("Bob");break;}
            else if(bob=='C'){printf("Alice");break;}
    case'R':if(bob=='S'){printf("Alice");break;}
            else if(bob=='C'){printf("Bob");break;}
    case'C':if(bob=='S'){printf("Bob");break;}
            else if(bob=='R'){printf("Alice");break;}
	default:printf("ERROR");break;}}
    return 0;
}
