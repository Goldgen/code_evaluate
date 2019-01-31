#include <stdio.h>
char* i2a(char* p,int n){
/* PreCondition:
 n is a non-negative integer,
 p is a pointer to a buffer
 PostCondition:
 put string representation of n in a buffer pointed by p?
 and return p
 Retrn char*: return the first address of buffer p.
 */
    static int i=0;
    if(n/10)
        i2a(p+i,n/10);
    *(p+i)=n%10+'0';
    i++;
    return p;
}
int main(){
    char s[2000];
    int i=0;
    scanf("%d",&i);
    i2a(s,i);
    printf("%s\n",s);
}