#include <stdio.h>
#include <stdlib.h>

int total(long long int);

int main()
{
    int m;
    scanf("%d",&m);
   printf("%d",total(m));
}

int total(long long int number){
    int ans;
     if(number/10==0)
        return number%10;

        ans=total(number/10)+number%10;
     return ans;

}
