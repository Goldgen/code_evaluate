#include <stdio.h>
int main(){
	int n,i=1;
	scanf("%d",&n);
	for(char apl='A';apl<='A'+n-1;apl++){
		for(int j=1;j<=n-i;j++)
		printf(" ");
		for(int k=1;k<=2*i-1;k++)
		printf("%c",apl);
		printf("\n");
		i++;
	}
	i-=n;
	for(char apl2='A'+n;apl2<='A'+2*(n-1);apl2++){
		for(int j=1;j<=i;j++)
		printf(" ");
		for(int k=1;k<=2*(n-i)-1;k++)
		printf("%c",apl2);
		if(i!=n)
		printf("\n");
		i++;
	}
	return 0;
}