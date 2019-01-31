#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void p(int x,int y);
int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  p(x,y);

   return 0;
}
void p(int x,int y){

int c=0;
for(int i=x;i<=y;i++)
    if(isgraph(i))
		c++;
if(c==0)printf("NONE");
else{int m=1;
  for(int i=x;i<=y;i++)
  {
    if(isgraph(i)){
       if(m==1){
            printf("%-8d",i);
        printf("%c",i);
        m=0;
        continue;
        }
        if(m!=1){
            printf("\n");
             printf("%-8d",i);
        printf("%c",i);

        }

        }


}
}
}





































































































