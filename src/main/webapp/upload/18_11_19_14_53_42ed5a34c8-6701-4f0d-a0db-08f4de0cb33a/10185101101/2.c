#include <stdio.h>
#include <string.h>
char num[100];
int calculate(int p){
    static int sum=0;
    int g[100];
    g[p]=(num[p])-'0';

    sum += (g[p]);
    if(p>0)
        return calculate(p-1);


}
int main()
{
    int q,total;
    gets(num);
    q=strlen(num)-1;
    total=calculate(q);
    printf("%d",total);
    return 0;
}