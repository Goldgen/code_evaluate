#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n,m,i,cnt=0;
  scanf("%d",&n);
  int input[100];
  for(i=0;i<n;i++)
  {
      scanf("%d",&input[i]);
  }
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
    if(input[i]==m)
       {
        cnt++;
        }
  }
	int j;
	int index=1;
  if(cnt==0)
    printf("ERROR");
  else 
{
     for(i=0;i<n;i++)
    {
       if(input[i]==m)
	   {   
		   index++;
		   if (index==2){
		   for(j=i;j<n-1;j++)
		   {
			   input[j]=input[j+1];
		   }}
	   }
     }
	  printf("%d",input[0]); 
	  for(i=1;i<n-1;i++)
		  printf(" %d",input[i]);
}
  return 0;
}