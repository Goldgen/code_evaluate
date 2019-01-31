#include <stdio.h>
#include <stdlib.h>

int INDEX(int a)
{
    int c=1;
    for(int b=1;b<=a;++b)
    c=c*2;
    return c;
}
int main()
{

   int n;
   scanf("%d", &n);
     for(int i = 0; i <INDEX(n) ; ++i)
      {
          printf("{");
          for(int j= 0; j<n; ++j)
          {
              if(i & INDEX(j))
              {
                  if ((i >=INDEX(j)) && (i <INDEX(j+1)))
                  printf("%d",j);
                  else
                  printf("%d,",j);
               }
         }
         if ( i+1 ==INDEX(n))
            printf("}");
         else
            printf("}\n");

      }

    return 0;
}

