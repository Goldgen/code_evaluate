#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char s[n][30],a[30];
	int v,i;
	for (i=0;i<n;i++){
		gets(s[i]);
	}
	for (i=0;i<n;i++){
		for (v=i+1;v<n;v++){
		    for (int x=0;;){
		    	if (s[i][x]<s[v][x]){
		    		strcpy(a,s[i]);
		    		strcpy(s[i],s[v]);
		    		strcpy(s[v],a);
		    		break;
				}
				else if (s[i][x]==s[v][x]){
					x++;
				}
				else{
					break;
				}
			}
		}
		printf ("%s\n",s[i]);
	}
}