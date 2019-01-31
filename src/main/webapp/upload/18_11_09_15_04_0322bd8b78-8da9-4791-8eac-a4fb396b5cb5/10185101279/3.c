#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>
#include<string.h>

int main()
{
   char w[100];
   scanf("%s",w);
   int count=0;
   int i;
   int n=strlen(w);
   for(i=0;i<=n;i++)
    {

    if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'||w[i]=='A'||w[i]=='E'||w[i]=='O'||w[i]=='I'||w[i]=='U')
        count++;

    }
    if(count>=1)
    printf("yes");
    else
        printf("no");

    return 0;
}



