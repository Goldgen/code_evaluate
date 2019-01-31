#include <stdio.h>
main()
{
	int a;
	if((a=getchar())!=EOF)
    switch(a)
    {
    case 'a':
		case 'e':case 'i':
		case 'o':case 'u':
		case 'A': 
		case 'E':case 'I': 
		case 'O':case 'U':
        printf("yes");
        break;
    default:
        printf("no");
        break;
    }
}