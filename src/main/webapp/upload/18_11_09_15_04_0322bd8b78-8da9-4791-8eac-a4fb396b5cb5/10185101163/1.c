#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A,B;
    scanf("%c %c",&A,&B);
    switch(A){
    case 'S':{
        switch(B){
        case 'S':printf("Tie");break;
        case 'R':printf("Bob");break;
        case 'C':printf("Alice");break;
        default:break;
    }}break;
    case 'R':{
        switch(B){
        case 'S':printf("Alice");break;
        case 'R':printf("Tie");break;
        case 'C':printf("Bob");break;
        default:break;
    }}break;
    case 'C':{
        switch(B){
        case 'S':printf("Bob");break;
        case 'R':printf("Alice");break;
        case 'C':printf("Tie");break;
        default:break;
    }}break;
    default:break;
    }
    return 0;
}
