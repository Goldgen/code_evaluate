#include <stdio.h>

int main (void)

{
    int A=0;
    int B=0;
    scanf("%c %c",&A,&B);

    if( ((A==67)&&(B ==83)) || ((A==82)&&(B ==67)) ||((A==83)&&(B ==82)))
        printf("Bob");
    else if(A == B)
        printf("Tie");
    else
        printf("Alice");


}
