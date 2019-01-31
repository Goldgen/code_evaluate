#include <cstdio>
#include <cstdlib> 
#include <cstring>
char *a[1000];
//********** Specification of Input **********
char** Input(int n){
	for(int i=0;i<n;i++){
		a[i]=(char *)malloc(35 * sizeof(char));
		gets(a[i]);
	}
	return a;
}
/* PreCondition: 
         n is  the count of strings
   PostCondition:
          input n strings, and return the address of the char* array
*/
 
//********** Specification of Free **********
void Free(char**a, int n){
	for(int i=0;i<n;i++)
		free(a[i]);
}
/* PreCondition: 
     a points to a char* array in free store (heap), 
	 n is a positive integer
   PostCondition:
     free ***ALL*** memory allocated in Input function
*/
 
//********** Specification of Sort **********
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
/* PreCondition: 
         a is pointer which points to an array of char* pointers,
         and n is a positive integer
   PostCondition:
         a is sorted satisfying to the specification
*/
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