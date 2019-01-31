#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
char *a[1000];
char** Input(int n){
	for(int i=0;i<n;i++){
		a[i]=(char *)malloc(35 * sizeof(char));
		gets(a[i]);
	}
	return a;
}
void Free(char**a, int n){
	for(int i=0;i<n;i++)
		free(a[i]);
}
void Sort(char **a, int n){
	char temp[35];
	for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - 1- i;j++){
            if(strcmp(a[j], a[j + 1]) > 0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
}
int main()
{ char** p; int n,i;  scanf("%d",&n);  getchar();
//********** Input is called here **********
  p = Input(n);
//******************************************
//********** Sort is called here ***********
  Sort(p,n);
//******************************************
   for(i=0; i<n; i++) printf("%s\n",p[i]); 
  Free(p,n);
//******************************************
   return 0;
}
