#include<string.h>
#include<stdio.h>
char tmp[1000][10005]={0};
void main()
{
	int n,k,i,l;
	scanf("%d",&n);

	for(k=1;k<=n;k++)
	{
		int j=0;
		char c=1;
		int flag[10005]={0};

		do{
			scanf("%s",tmp[j]);
			j++;
			c=getchar();
		}while(c!='\n');

		for(i=0;i<j;i++)
			for(l=0;l<strlen(tmp[i]);l++){
				if(tmp[i][l]>'Z'||tmp[i][l]<'A'){
					flag[i]=1;
					break;
				}
	}
		for(i=0;i<j;i++)
			for(l=i+1;l<j;l++){
				if(strcmp(tmp[i],tmp[l])>=0&&flag[i]==0&&flag[l]==0){
					char t[10005];
					strcpy(t,tmp[i]);
					strcpy(tmp[i],tmp[l]);
					strcpy(tmp[l],t);
				}
			}
			
             printf("case #%d:\n",k-1);
		     for(i=0;i<j-1;i++)
		     {
			     printf("%s ",tmp[i]);
			 }
		     printf("%s\n",tmp[j-1]);
	 
	}
	return 0;
}
