#include <stdio.h>
#include <string.h>

//********** Specification of i2a **********
char* i2a(char* p,int n){
    if(n>0){
        int i=-1,j=n;
        while(j>0){
            i++;
            j/=10;
            }
    *(p+i)=n%10+48;
    n/=10;
    i2a(p,n);
    }
    return p;
}
/* PreCondition:
     n is a non-negative integer,
     p is a pointer to a buffer
   PostCondition:
     put string representation of n in a buffer pointed by p?
     and return p
Retrn char*: return the first address of buffer p.
*/

int main()
{
    int n;
    char p[20]={0};
    scanf("%d",&n);
    i2a(p,n);
    puts(p);
    return 0;
}
