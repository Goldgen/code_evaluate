#include <stdio.h>
int main(){
	int n;
    char num[100];
    char *spr=num;
    scanf("%d",&n);
    getchar();
    int k;
for(k=0;k<n;k++){
	gets(num);
	printf("case #%d: ",k);
	int i;
	for(i=0;num[i]!='\0';i++){
		if(*(spr+i)=='Z'){
			*(spr+i)='A';
		}
		else{
		*(spr+i)=*(spr+i)+1;
		}
		printf("%c",*(spr+i));

}if(k!=n-1)
		printf("\n");
}
return 0;
}