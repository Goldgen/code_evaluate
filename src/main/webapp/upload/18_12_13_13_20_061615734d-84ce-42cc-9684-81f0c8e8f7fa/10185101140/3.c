#include <stdio.h>
char *i2a(char *p, int n);

int main()
{
    int n;
    scanf("%d",&n);
    char r[20] = {'\0'};
    char *p = r;
    i2a(p, n);
    printf("%s",p);
    return 0;
}

 char *i2a(char *p, int n) {
     char a[20] = {'\0'};
     char *q = a;
     int count = 0;
     while (n>0) {
        *q = '0'+(n%10);
        q++; count++;
        n/=10;
     }
     int i;
     for (i=count-1; i>=0; i--,p++) {
        *p = a[i];
     }
     return NULL;
 }
