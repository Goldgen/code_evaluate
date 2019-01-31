#include <stdio.h>

#include <stdlib.h>

#include <math.h>
int data[105];

double fd(double x, int n)

{

double res = 1; int i;

for(i = 0; i < n; i++) res *= x;

return res;

}

double f(int expo, double res)

{

double r = 0; int i;

for(i = 0; i <= expo; i++)

r += data[i] * fd(1 + res, i); return r;

}

double fsolve(int expo)

{

double left = -1.0, right = 1.0;

while((right - left) > 0.0000000000000002)

{

if(f(expo, (left + right) / 2) * f(expo, right) > 0) right = (left + right) / 2;



else






left = (left + right) / 2;

}

return (left + right) / 2;

}

int main(void)

{

int t, i, j; scanf("%d", &t); for(i = 0; i < t; i++){

int expo; scanf("%d", &expo);

for(j = expo; j >= 0; j--) scanf("%d", &data[j]);

data[expo] *= (-1);

double ans = fsolve(expo); ans *= 100;



printf("case #%d:\n%.4f%%\n", i, ans);

}



return 0;

}
