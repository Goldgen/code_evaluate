#include <stdio.h>
#include<string.h>
int main()
{int t;
char ch1[1000][1000],ch2[1000];
scanf("%d",&t);
getchar();
for(int i=0;i<t;i++){
	gets (ch1[i]);
}
for(int i=0;i<t-1;i++){
	for(int j=0;j<t-i-1;j++){
		if (strcmp (ch1[j+1],ch1[j])>0){
			strcpy (ch2, ch1[j+1]);
			strcpy (ch1[j+1],ch1[j]);
			strcpy(ch1[j],ch2);
		}
	}
}
for(int j=0;j<t;j++){
	puts (ch1[j]);
}
    return 0;}
