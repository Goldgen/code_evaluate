#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
//#include "function.h"
int sum(int n);

void main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",sum(n));
}

int sum(int n) {
    if (n < 10)
        return n;
		return sum(n%10)+sum(n/10);
}
