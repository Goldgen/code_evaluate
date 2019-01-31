#include <stdio.h>
char array[100];
char *ptr = array;
void i2a(int i){
int temp = i%10;
if(i!=0){
i2a(i/10);
*ptr++ = '0' + temp;
}
else return;
}
void main(){
int i;
scanf("%d",&i);
i2a(i);
*ptr='\0';
ptr = array;
while(*ptr!='\0')
printf("%c",*ptr++);
}
