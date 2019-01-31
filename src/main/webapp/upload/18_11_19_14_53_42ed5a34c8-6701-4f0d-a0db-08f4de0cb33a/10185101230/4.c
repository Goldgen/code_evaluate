#include<stdio.h>
void func(int i)
{ if(i>1)
 func(i/2);
printf("%d",i%2);
}
main()
{ int n;
scanf("%d",&n);
func(n);
return 0;
}
