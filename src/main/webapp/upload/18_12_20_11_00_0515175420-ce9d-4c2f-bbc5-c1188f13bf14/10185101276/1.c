#include <stdio.h>
#include <malloc.h>
#include <string.h>
int get(char *pa)
{
    char *p=pa;
    while(1==scanf("%c",pa)&&*pa!='\n')pa++;
    *pa='\0';
    return pa-p;
}
//********** Specification of Input **********
char** Input(int n)
{
    int i=0;
    char **pa = (char**)malloc(n * sizeof(char*));
    for (i=0;i<n;i++){
        pa[i] =(char*)malloc(31);
    }
    for (i=0;i<n;i++)get(pa[i]);
    return pa;
}
//********** Specification of Free **********
void Free(char**a, int n)
{
    int i=0;
    for(i=0;i<n;i++)free(a[i]);
    free(a);
}
//********** Specification of Sort **********
void Sort(char **a, int n)
{
    int i=0,e=0;
    char *tmp;
    for (i=0;i<n-1;i++)
    for(e=0;e<n-1-i;e++){
        if(strcmp(a[e],a[e+1])>0){
            tmp = a[e];
            a[e] = a[e+1];
            a[e+1] = tmp;
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
