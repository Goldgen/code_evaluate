#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    switch('a')
    {
		case 'a':case 'A':printf("yes");break;
        case 'e':case 'E':printf("yes");break;
		case 'i':case 'I':printf("yes");break;
		case 'o':case 'O':printf("yes");break;
		case 'u':case 'U':printf("yes");break;
		default:printf("no");break;
    }
    return 0;
}
