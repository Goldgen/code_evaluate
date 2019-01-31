#include <stdio.h>
int main()
{double n=2.0,m=1.0,p=0,q=0;
for(int i=1;i<=50;i++)
{p+=n/m;
q=m;
m=n;
n+=q;

}
printf("%.2f",p);
    return 0;
}