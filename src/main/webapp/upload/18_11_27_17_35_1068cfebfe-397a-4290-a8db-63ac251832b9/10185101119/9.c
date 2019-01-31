#include <stdio.h>
#include <string.h>
int main(){
	char num[2][1001]={0},sum[1002]={0};
	scanf("%s",&num[0]);
	getchar();
	scanf("%s",&num[1]);
	int len[2]={strlen(num[0]),strlen(num[1])};
	for(int j=0;j<2;j++){
		for(int i=0;i<=len[j]-1;i++){
			num[j][i]-='0';
		}
	}
	for(int j=0;j<2;j++){
		for(int i=0;i<=len[j]/2-1;i++){
			char temp=num[j][i];
			num[j][i]=num[j][len[j]-1-i];
			num[j][len[j]-1-i]=temp;
		}
	}
    int maxlen= len[0]>len[1]?len[0]:len[1];
	for(int i=0;i<=maxlen-1;i++){
		sum[i]+=num[0][i]+num[1][i];
		if(sum[i]>=10){
			sum[i]-=10;
			sum[i+1]++;
		}
	}
    if(sum[maxlen])
    maxlen++;
	for(int i=maxlen-1;i>=0;i--){
		printf("%d",sum[i]);
	}
	return 0;
}