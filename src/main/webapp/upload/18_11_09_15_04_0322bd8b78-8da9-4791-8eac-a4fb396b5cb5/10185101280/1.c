#include<stdio.h>
int main()
{
 char a,b;
 scanf("%c %c",&a,&b);
 if(a=='S'&&b=='C'||a=='R'&&b=='S'||a=='C'&&b=='R'){
    printf("Alice");
 }
 else if(a==b){
    printf("Tie");
 }
 else{
    printf("Bob");
 }
return 0;
}
