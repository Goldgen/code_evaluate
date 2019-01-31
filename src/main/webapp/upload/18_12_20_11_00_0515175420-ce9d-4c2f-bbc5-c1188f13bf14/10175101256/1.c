#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n){
    char** str=(char *)malloc(sizeof(char)*n*31);
    for(int i=0;i<n;i++){
        str[i]=(char*)malloc(31*sizeof(char));
        gets(str[i]);
    }
    return str;
}
/* PreCondition:
         n is  the count of strings
   PostCondition:
          input n strings, and return the address of the char* array
*/

//********** Specification of Free **********
void Free(char**a, int n){
    for(int i=0;i<n;i++){
        free(a[i]);
    }
    return;
}
/* PreCondition:
     a points to a char* array in free store (heap),
	 n is a positive integer
   PostCondition:
     free ***ALL*** memory allocated in Input function
*/

//********** Specification of Sort **********
void Sort(char **a, int n){
    char *t;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
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
