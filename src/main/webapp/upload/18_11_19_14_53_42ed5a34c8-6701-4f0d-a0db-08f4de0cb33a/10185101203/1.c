#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=0,c=0;
    for(int i=1;;i++){
    scanf("%f",&n);
    if(n==-1)
        break;
    else{
    c+=n;
    printf("%.2f\n",c/i);}
    }
}
