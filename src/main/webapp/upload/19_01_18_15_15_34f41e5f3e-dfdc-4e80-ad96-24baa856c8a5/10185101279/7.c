#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    unsigned int a;
    int n=0;
    scanf("%u",&a);
    for(int i=0;i<32;i++)
    {
        if(((a>>i)&1)==1)
            n++;
    }
    printf("%d",n);

  return 0;
}
















