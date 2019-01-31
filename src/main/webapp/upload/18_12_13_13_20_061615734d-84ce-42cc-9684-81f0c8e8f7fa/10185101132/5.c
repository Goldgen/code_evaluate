#include <stdio.h>
#include <stdlib.h>

const char MONTH[][12] = {"January", "February", "March",
                          "April", "May", "June",
                          "July", "August", "September",
                          "October", "November", "December"};


void Number2Alpha(int num, char* mptr);
/* PreCondition:
     num is an integer in range [1,12]
   PostCondition:
     return the address of a word that represents month with num
*/

int main()
{
    int i = 0;
    scanf("%d", &i);
    Number2Alpha(i, MONTH);
    return 0;
}

void Number2Alpha(int num, char* mptr){
    printf("%s", MONTH[num - 1]);
}
