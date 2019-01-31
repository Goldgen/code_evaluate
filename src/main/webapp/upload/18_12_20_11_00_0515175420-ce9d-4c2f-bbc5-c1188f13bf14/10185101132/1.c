#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 32

//********** Specification of Input **********
char** Input(int n);
/* PreCondition:
         n is  the count of strings
   PostCondition:
          input n strings, and return the address of the char* array
*/

//********** Specification of Free **********
void Free(char**a, int n);
/* PreCondition:
     a points to a char* array in free store (heap),
	 n is a positive integer
   PostCondition:
     free ***ALL*** memory allocated in Input function
*/

//********** Specification of Sort **********
void Sort(char **a, int n);
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

char** Input(int n){
    char** nstr = (char**)malloc(n * sizeof(char**));

    int i;
    for(i = 0; i < n; i++){
        nstr[i] = (char*)malloc(MAXSIZE * sizeof(char));
        gets(nstr[i]);
    }

    return nstr;
}

void Free(char**a, int n){
    int i;
    for(i = 0; i < n; i++){
        free(a[i]);
    }

    free(a);
}

void Sort(char **a, int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(strcmp(a[j], a[j + 1]) > 0){
                char temp[MAXSIZE];
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
}
