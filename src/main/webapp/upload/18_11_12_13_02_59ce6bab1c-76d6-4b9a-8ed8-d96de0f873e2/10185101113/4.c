#include<stdio.h>
void change(unsigned int);
int main()
{
    unsigned int n;
    scanf("%o",&n);
    change(n);
    return 0;
}
void change(unsigned int n){
    printf("%d",n);
    return;

}
