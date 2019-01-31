 #include <stdio.h>
int hanshu(int b){
    int a=2;
 int c=0;
for(a=2;a<b;a++){

  if(b%a==0)
       {c=c+1;
    break;}


  }return c;}

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==2){
            printf("It is a prime number.");
    }
else{
        i=hanshu(n);
if(i==0)
      printf("It is a prime number.");
else
    printf("It's not a prime number.");}
return 0;
   }
