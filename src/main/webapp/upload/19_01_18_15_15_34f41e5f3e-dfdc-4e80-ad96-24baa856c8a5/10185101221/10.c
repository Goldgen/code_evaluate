#include <stdio.h>
#include <stdlib.h>


int main()
{

   int n;
   scanf("%d", &n);
     for(int i = 0; i < (1 << n) ; ++i)
      {
          printf("{");
          for(int j = 0; j < n; ++j)
          {
              if(i & (1 << j))
              {
                  if ((i >= (1<<j)) && (i < (1<<(j+1))))
                  printf("%d",j);
                  else
                  printf("%d,",j);
               }
         }
         if ( i+1 == (1<<n))
            printf("}");
         else
            printf("}\n");

      }

    return 0;
}
