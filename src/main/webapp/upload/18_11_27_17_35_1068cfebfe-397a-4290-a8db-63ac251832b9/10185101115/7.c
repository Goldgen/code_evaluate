#include <stdio.h>

int main()
{int n,k=0;
int data[10000];
int key;
int j=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&data[i]);
}
scanf("%d",&key);
for(int i=0;i<n;i++){
if(data[i]==key){
	j++;
if(j==1){
	printf("%d",i);
}
else if(j>1){
	printf(" %d",i);
}
}
}
if(j==0)
    printf("ERROR");
}