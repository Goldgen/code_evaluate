#include <stdio.h>
int main()
{
    float x,y;
    char a;
    scanf("%f%c%f",&x,&a,&y);
    switch(a){
        case '+':printf("%.3f",x+y);break;
        case '-':printf("%.3f",x-y);break;
        case '*':printf("%.3f",x*y);break;
        case '/':printf("%.3f",x/y);break;
        default:break;

}
}