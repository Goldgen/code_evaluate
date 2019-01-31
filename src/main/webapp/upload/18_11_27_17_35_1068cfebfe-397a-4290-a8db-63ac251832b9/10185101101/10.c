#include <stdio.h>
int main ()
{
int i, j,temp;
int array[1000];
int n;
scanf("%d",&n);
for (i = 0;i <n; i++)
{
scanf ("%d",&array[i]);
}

for (j = 0;j < n-1; j++)
{
for(i = 0;i < n-j-1; i++)
{
if (array[i] > array[i+1])
{
temp = array[i];
array[i] = array[i+1];
array[i+1] = temp;
}
    }
        }
for(i = 0;i < n ; i++)
{
printf ("%d",array[i]);
if(i!=n-1)printf(" ");
}
return 0;
}