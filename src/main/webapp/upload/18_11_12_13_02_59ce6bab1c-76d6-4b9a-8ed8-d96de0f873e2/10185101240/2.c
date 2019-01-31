#include<stdio.h>
#include<ctype.h>
int number(int st,int ed)
{ 
	int r=0;
	int i;
    for(i=st;i<=ed;i++){
	if(isgraph(i)){
		if(i<100){
		   printf("%d      %c\n",i,i);
		   r=1;
	}
	   else
	   {   printf("%d     %c\n",i,i);
	       r=1;}
	}
   }
	if(r==0)
		printf("NONE");
    return;
}
int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    number(st,ed);
    return 0;
}