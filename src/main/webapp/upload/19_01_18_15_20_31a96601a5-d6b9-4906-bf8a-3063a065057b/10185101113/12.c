#include <stdio.h>

int main()
{
    double A1,A2;
    char ch;
    scanf("%lf%c%lf",&A1,&ch,&A2);
      switch (ch)
    {
      case '+':
        printf("%.3lf",A1+A2);
        break;
      case '-':
        printf("%.3lf",A1-A2);
        break;
      case '*':
        printf("%.3lf",A1*A2);
        break;
      case '/':
        printf("%.3lf",A1/A2);
        break;
      default:
        printf("ERROR");
        break;
    }

    return 0;
}
