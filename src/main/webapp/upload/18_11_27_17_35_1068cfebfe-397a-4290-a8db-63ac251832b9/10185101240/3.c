#include <stdio.h>

int main()
{
  float amounts[5]={0.0f};
  long dollars[5]={0L};
  long cents[5]={0L};
  int i;
  for(i=0;i<5;i++)
    {
      scanf("%f ",&amounts[i]);
    }
    for(int i=0;i<5; i++)
    {
        dollars[i] = (long)amounts[i];
        cents[i] = (long)(amounts[i]*100)%100;
    }
    for (i=0;i<5;i++)
    {
		if(i==0)
            printf("$%ld.%.2ld", dollars[i], cents[i]);
		else
            printf(" $%ld.%.2ld", dollars[i], cents[i]);
    }
    return 0;

}
