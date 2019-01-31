/**************
GDB(a.b) = a if b =0
GDB(a.b) = GDB(b, a%b), if b >0
 **************/

#include <stdio.h>
#include <stdlib.h>

int GDB(int, int);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", GDB(a, b));
    return 0;
}

int GDB(int a, int b){
    return b > 0 ? GDB(b, a%b) : a;
}
