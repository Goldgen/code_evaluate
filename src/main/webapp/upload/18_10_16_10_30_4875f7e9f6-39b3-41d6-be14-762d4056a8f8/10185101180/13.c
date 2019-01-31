#include <stdio.h>
int main()
{
    int one,two,three;
    scanf("%d %d %d",&one,&two,&three);
    switch(two)
    {
    case 11: case 21: case 31: case 1:
        printf("%dst",two);
        break;
    case 2: case 12: case 22:
        printf("%dnd",two);
        break;
    case 3: case 13: case 23:
        printf("%drd",two);
        break;
    default:
        printf("%dth",two);
        break;
    }
    switch(one)
    {
        case 1:
        printf(" January");
        break;
        case 2:
        printf(" February");
        break;
        case 3:
        printf(" March");
        break;
        case 4:
        printf(" April");
        break;
        case 5:
        printf(" May");
        break;
        case 6:
        printf(" June");
        break;
        case 7:
        printf(" July");
        break;
        case 8:
        printf(" August");
        break;
        case 9:
        printf(" September");
        break;
        case 10:
        printf(" October");
        break;
        case 11:
        printf(" November");
        break;
        case 12:
        printf(" December");
        break;
        default:
            printf("ERROR");
			break;
    }
    printf(" %d",three);
    return 0;
}
