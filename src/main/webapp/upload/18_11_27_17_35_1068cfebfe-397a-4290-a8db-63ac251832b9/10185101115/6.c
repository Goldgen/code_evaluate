#include <stdio.h>

int main()
{int n;
int data[n];
int key,num=-1;
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&data[i]);
}
scanf("%d",&key);
for(int i=0;i<n;i++){
	if(data[i]==key){
		num=i;
		break;
	}
}
if(num==-1){
	printf("ERROR");
}
else{ 
for(int i=num;i<n-1;i++){
	data[i]=data[i+1];
}
for(int i=0;i<n-1;i++){
	if(i!=n-2){
		printf("%d ",data[i]);
	} 
	else{
		printf("%d",data[i]);
	}
}

}

}