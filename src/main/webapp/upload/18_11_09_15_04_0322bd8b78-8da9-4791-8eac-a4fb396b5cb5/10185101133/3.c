#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,m;
    while((c=getchar())!=EOF){
        switch(c){
            case 97:case 101:case 105:case 111:case 117:
            case 65:case 69:case 73:case 79:case 87:
        	m=1;
				break;
            default:
                break;
        }

    }
    if(m==1)
        printf("yes");
    else
        printf("no");
    return 0;
}
