#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);

  switch(b)
  {
      case 1:printf("1st ");break;
      case 2:printf("2nd ");break;
      case 3:printf("3rd ");break;
    case 21:printf("21st ");break;
      case 22:printf("22nd ");break;
      case 23:printf("23rd ");break;
      case 31:printf("31st ");break;
      default:printf("%dth ",b);break;
  }
    switch(a)
  {
      case 1:printf("January %d",c);break;
      case 2:printf("February %d",c);break;
      case 3:printf("March %d",c);break;
      case 4:printf("April %d",c);break;
      case 5:printf("May %d",c);break;
      case 6:printf("June %d",c);break;
      case 7:printf("July %d",c);break;
      case 8:printf("August %d",c);break;
      case 9:printf("September %d",c);break;
      case 10:printf("October %d",c);break;
      case 11:printf("November %d",c);break;
      case 12:printf("December %d",c);break;
      default: break;

  }

    return 0;
}
