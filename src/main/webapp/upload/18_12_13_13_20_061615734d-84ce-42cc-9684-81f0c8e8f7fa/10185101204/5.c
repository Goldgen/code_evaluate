#include <stdio.h>
int main()
{char month[12][20]={"January",
"February",
"March",
"April",
"May",
"June",
"July",
"August",
"September",
"October",
"November",
"December"};
int t;
scanf("%d",&t);
printf("%s",month[t-1]);
return 0;}
