#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	int l,num;
	int j,k,out;
	l=strlen(str1);
	for(int i=0;i<l;i++){
		str2[i]=str1[l-1-i];
	}
	for(int i=0;i<l;i++){
		int k;
	    if(str2[i]=='0'){
	    	k=0;
		}
		else if(str2[i]=='1'){
	    	k=1;
		}
		else if(str2[i]=='2'){
	    	k=2;
		}
		else if(str2[i]=='3'){
	    	k=3;
		}
		else if(str2[i]=='4'){
	    	k=4;
		}
		else if(str2[i]=='5'){
	    	k=5;
		}
		else if(str2[i]=='6'){
	    	k=6;
		}
		else if(str2[i]=='7'){
	    	k=7;
		}
		else if(str2[i]=='8'){
	    	k=8;
		}
		else if(str2[i]=='9'){
	    	k=9;
		}
		else if(str2[i]=='A'||str2[i]=='a'){
	    	k=10;
		}
		else if(str2[i]=='B'||str2[i]=='b'){
	    	k=11;
		}
		else if(str2[i]=='C'||str2[i]=='c'){
	    	k=12;
		}
		else if(str2[i]=='D'||str2[i]=='d'){
	    	k=13;
		}
		else if(str2[i]=='E'||str2[i]=='e'){
	    	k=14;
		}
		else if(str2[i]=='F'||str2[i]=='f'){
	    	k=15;
		}
		j=pow(16,i);
		num=k*j;
		out+=num;
	}	
	printf("%d",out);
	return 0;
}