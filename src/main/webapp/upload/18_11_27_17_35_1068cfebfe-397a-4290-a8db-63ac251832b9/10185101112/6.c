#include <stdio.h>

int main(){
	int t,num,a,c=0,count=0;
    scanf("%d",&t);
    int arr[t];
    int i=0;
    for(;i<t;i++){
    	scanf("%d",&num);
    	arr[i]=num;
	}
	scanf("%d",&a);
    
    for(int j=0;j<t;j++){
    	if(arr[j]==a)
    	c++;
	}
	if (c)	
	{
	
	if(arr[0]==a){
    printf("%d",arr[1]);
    count++;
    }
    else if(arr[1]==a)
		{
    printf("%d",arr[0]);
    count++;
   } 
    else
		 printf("%d %d",arr[0],arr[1]); 
	for(int j=2;j<t;j++){
		if ((arr[j]==a)&&(count==0))
		count++;
        else
        printf(" %d",arr[j]);               
	}
}
		else
		printf("ERROR");
    return 0;
}