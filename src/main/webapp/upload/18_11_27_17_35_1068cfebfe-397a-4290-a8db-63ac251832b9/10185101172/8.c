#include <stdio.h>

int main()
{
  int i,j,n=0;
  int max=1;
  scanf("%d",&n);
  int data[n];
  for(i=0;i<n;i++)
      scanf("%d",&data[i]);
   for (i = 1,j=0; i < n; i++)
    {
            if (data[i] == data[i-1])
                max++;
            else
            {
                if (max > j)
                    j = max;
                max = 1;
            }
    }

    if (max > j)
        j = max;
  printf("%d",j);
  return 0;
}
