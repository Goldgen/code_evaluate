#include <stdio.h>
#include <string.h>
#include <math.h>
char ch[10];
int num[10];

int main(){
	scanf("%s",ch);
	int l=strlen(ch);
	long long sum=0;
    for(int i=0;i<l;i++)
    {
    	switch(ch[i])
    	{
    		case'1':num[i]=1;break;case'2':num[i]=2;break;
    		case'3':num[i]=3;break;case'4':num[i]=4;break;
    		case'5':num[i]=5;break;case'6':num[i]=6;break;
    		case'7':num[i]=7;break;case'8':num[i]=8;break;
    		case'9':num[i]=9;break;case'0':num[i]=0;break;
    		case'a':case'A':num[i]=10;break;
    		case'b':case'B':num[i]=11;break;
    		case'c':case'C':num[i]=12;break;
    		case'd':case'D':num[i]=13;break;
    		case'e':case'E':num[i]=14;break;
    		default:num[i]=15;break;
		}
	}
	for (int j=0;j<l;j++)
	{
		sum+=num[j]*pow(16,l-j-1);
	}
	printf("%lld",sum);
	return 0;
} 