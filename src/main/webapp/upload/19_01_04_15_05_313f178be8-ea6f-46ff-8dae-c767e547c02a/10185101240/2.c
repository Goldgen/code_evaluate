/*#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    scanf("%d+%d=%d",&a,&b,&c);
    int x;
    for(x=0;x<=c;x++){
      if(a*x*10+b==c){
        printf("%d",x);
        break;}
      else if(b*x*10+a==c)
        {
            printf("%d",(-1)*x);
            break;
        }
      }
    
      return 0;
}*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int cf(int x)
{
    int i;
    int sum=1;
    for(i=0;i<x;i++){
        sum=sum*10;
        }
    return sum;
}
int main()
{
    int a,b,c;
    scanf("%d+%d=%d",&a,&b,&c);
    int x;
    for(x=0;;x++){
      if(a*cf(x)+b==c)
      {
        printf("%d",x);break;
      }
      else if(b*cf(x)+a==c)
        {
            printf("%d",(-1)*x);break;
        }
      }

      return 0;
}

