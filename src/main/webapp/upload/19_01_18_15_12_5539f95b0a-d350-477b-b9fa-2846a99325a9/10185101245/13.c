#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z;


scanf("%d%d%d",&x,&y,&z);
int d=y%10;

  if (y<=10||y>=20)
   {switch(d)
    {
    case 1:
        printf("%dst ",y);
      break;
    case 2:
        printf("%dnd ",y);
        break;
     case 3:
        printf("%drd ",y);
         break;
    default:
        printf("%dth ",y);
        break;
    }
   }
     else
        printf("%dth ",y);

 switch(x)
 {
 case 1:
    printf("January ");
    break;
    case 2:
        printf("February ");
        break;
        case 3:
            printf("March ");
        break;
        case 4:
            printf("April ");
            break;
        case 5:
            printf("May ");
             break;
        case 6:
            printf("June ");
     break;   
	 case 7:
            printf("July ");
            break;
            case 8:
            printf("August ");
            break;
            case 9:
                printf("September ");
            break;
            case 10:
                printf("Octerber ");
            break;
            case 11:
                printf("November ");
            break;
            default:
                printf("December ");
                break;






 }

 printf("%d",z);
    return 0;
}