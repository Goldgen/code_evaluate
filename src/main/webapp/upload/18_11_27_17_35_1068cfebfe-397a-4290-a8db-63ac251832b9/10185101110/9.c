#include<stdio.h> 
#include<string.h>
int main(void)
{
	char sa[10000],sb[10000],sc[10000];
	int la,lb,lc,x=0,i,j,a[10000]={0},b[10000]={0},c[10000]={0};
	 
	 scanf("%s",sa);
	 scanf("%s",sb) ;
	 la=strlen(sa);
	 lb=strlen(sb);
	 
	 for(i=1;i<=la;i++)
	  a[la-i]=sa[i-1]-'0';
	 for(i=1;i<=lb;i++)
	  b[lb-i]=sb[i-1]-'0';
	   
	  for(lc=1;lc<=la||lc<=lb;lc++)
	  {
	  	c[lc-1]=a[lc-1]+b[lc-1]+x;
	  	x=c[lc-1]/10;
	  	c[lc-1]%=10;
	  }	  
	  
	  if(c[lc-1]==0)
	   lc--;
	   
	   for(i=lc-1;i>=0;i--)
	    printf("%d",c[i]);
	    return 0;
	   
} 