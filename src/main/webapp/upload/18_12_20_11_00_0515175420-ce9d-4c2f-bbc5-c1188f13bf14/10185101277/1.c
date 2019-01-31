#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE1 400
#define SIZE2 200

int i;
//********** Specification of Input **********
char** Input(int n)
/* PreCondition:
         n is  the count of strings
   PostCondition:
          input n strings, and return the address of the char* array
*/
 {
     char **a=(char**)malloc(sizeof(char*)*n);
     char b[SIZE2];
     int len;
     for(i=0;i<n;i++){
        gets(b);
        len=strlen(b);
        a[i]=(char*)malloc(sizeof(char)*(len+1));
        strcpy(a[i],b);
     }
     return a;
 }


//********** Specification of Free **********
void Free(char**a, int n)
/* PreCondition:
     a points to a char* array in free store (heap),
	 n is a positive integer
   PostCondition:
     free ***ALL*** memory allocated in Input function
*/
{
   for(i=0;i<n;i++){
    free(a[i]);
   }
   free(a);
}
//********** Specification of Sort **********
void Sort(char **a, int n)
/* PreCondition:
         a is pointer which points to an array of char* pointers,
         and n is a positive integer
   PostCondition:
         a is sorted satisfying to the specification
*/
{
    int j,minp;
    char b[SIZE2];
    for(j=0;j<n-1;j++){
        minp=j;
        for(i=j+1;i<n;i++){
            if(strcmp(a[i],a[minp])<0){
                minp=i;
            }
        }
        if(minp!=j){
                strcpy(b,a[minp]);
                strcpy(a[minp],a[j]);
                strcpy(a[j],b);
            }
    }
}
int main()
{
    char** p;
    int n;
    scanf("%d",&n);
    getchar();
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
