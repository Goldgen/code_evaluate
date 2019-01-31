#include<stdio.h>
int main()
{ int n,m,i,j,k,f;
  int count=0;
  f=0;
  scanf("%d",&n);
  m=1;
  for(i=1;i<=n;i++)
	  m=m*2;
  m--;
  for(i=0;i<=m;i++)
  {
	  printf("{");
	  j=i;
	  k=0;
	  while(j!=0)
	  {
		  if(j%2!=0)
		  {
		      count++;
            if(count==1)
            {
            printf("%d",k);
			break;
            }
            else if(f==0)
            {
            	printf("%d",k);
            	f=1;
			}else
             printf(",%d",k);
		  }
		  k++;
		  j/=2;
	  }
	  printf("}");
      f=0;
      if(i<m)printf("\n");
  }

  return 0;
}
         