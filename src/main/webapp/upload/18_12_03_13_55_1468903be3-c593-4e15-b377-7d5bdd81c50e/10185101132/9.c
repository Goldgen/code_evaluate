#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 90

int OccurTimes(char rsrc[], char rkey[]);
int FirstLoc(char rsrc[], char rkey[]);

int main()
{
    char src[MAXSIZE];
    char key[MAXSIZE];

    gets(src);
    gets(key);

    int times = OccurTimes(src, key);

    printf("%s: %d time(s), first at %d", key
                                        , times
                                        , FirstLoc(src, key));

    return 0;
}

int OccurTimes(char rsrc[], char rkey[]){
    int cnt = 0;

    char *hasKey = strstr(rsrc, rkey);
    while(hasKey){
        cnt++;
        hasKey = strstr(hasKey + 1, rkey);
    }

    return cnt;
}

int FirstLoc(char rsrc[], char rkey[]){
    char *pkeyLoc = strstr(rsrc, rkey);

    if(pkeyLoc){
        return (int)(pkeyLoc - rsrc);
    }
	
        return -1;
    
}
