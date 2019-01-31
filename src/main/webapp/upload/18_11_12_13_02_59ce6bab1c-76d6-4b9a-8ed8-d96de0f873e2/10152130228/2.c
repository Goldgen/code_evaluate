#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*（函数）Write a function
that will output the printable characters for character code values
from st(0-127) to ed（0-127）.
Output each character code along with its symbol with two characters to a line.
Make sure the columns are aligned.
(Hint: You can use the isgraph() function that’s declared in ctype.h
 to determine when a character is printable.)
每行的输出格式如“65      A”（不含引号）。
*/

int main()
{
    int st, ed, num;
    char ch;
    scanf("%d%d", &st, &ed);
    num = ed-st+1;
    ch = (char)st;
    if(!isgraph(st) && !isgraph(ed)) 
	{printf("NONE");}
    else{
        int cnt=0;
        for(int i=0; i<num; i++)
            if(isgraph(st+i)) 
				cnt++;
        for(int i=0; i<num; i++)
            if(isgraph(st+i)){
                for(int j=0; j<cnt-1; j++)
                    printf("%-3d     %c\n", st+i+j, st+i+j);
                printf("%-3d     %c", st+i+cnt-1, st+i+cnt-1);
                break;
            }
    }
    return 0;
}
