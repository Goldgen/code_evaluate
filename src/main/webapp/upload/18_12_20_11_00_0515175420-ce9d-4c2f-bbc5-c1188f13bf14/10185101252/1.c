#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//********** Specification of Input **********
char** Input(int n){

    char ** p = (char**)malloc(n * sizeof(char*));
    for(int i = 0; i < n; i++)
        p[i] = (char*)malloc(31*sizeof(char));
    for(int i = 0; i < n; i++)
        gets(p[i]);

    return p;
}

//********** Specification of Free **********
void Free(char**a, int n){

    for(int i = 0; i < n; i++)
        free(a[i]);
    free(a);

    return;
}

//********** Specification of Sort **********
void Sort(char **a, int n){
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n - i - 1; j++){
            if(strcmp(a[j], a[j+1]) > 0){
                char * temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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
