#include <stdio.h>



int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int i=a,k=0;
	for (;i<=b;i++){
		if (isgraph(i))
		{
		printf("%-3d     %c\n",i,i);
		k++;}
		
	} 
	if (k==0)
	printf("NONE");
	return 0;
}