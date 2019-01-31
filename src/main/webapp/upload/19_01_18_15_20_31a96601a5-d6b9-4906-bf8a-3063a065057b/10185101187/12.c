#include<stdio.h>

int main()
{
      double num1 = 0;
      double num2 = 0;
      char ch;
      double ret = 0;

      scanf( "%lf%c%lf", &num1, &ch, &num2);

      switch(ch)
      {
       case '+':
         ret = num1 + num2;
         break;
       case '-':
         ret = num1 - num2;
         break;
       case '*':
         ret = num1 * num2;
         break;
       case '/':
         ret = num1 / num2;
         break;
       default:
         break;
       }

    printf( "%.3lf", ret );
}
