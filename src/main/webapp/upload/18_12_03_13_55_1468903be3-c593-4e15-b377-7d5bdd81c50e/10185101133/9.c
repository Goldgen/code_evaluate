#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int times(char str[],char fnd[]){
    int i,j,k;
    int count=0;
    for(i=0;str[i]!='\0';i++){
        j=i;k=0;while(fnd[k]!='\0' && str[j]==fnd[k]){j++;k++;
		}
        if(k>0 && fnd[k]=='\0')
            count++;
    }
    return count;
}

int pos(char str[],char fnd[]){
    int i,j,k;
    for(i=0;str[i]!='\0';i++){
        j=i;k=0;while(fnd[k]!='\0' && str[j]==fnd[k]){j++;k++;
		}
        if(k>0 && fnd[k]=='\0')
            return i;
    }
    return -1;
}

int main()
{
    char str[81];
    char fnd[81];
    int time=0,position=-1;
    gets(str);
    gets(fnd);
    time = times(str,fnd);
    position = pos(str,fnd);
        printf("%s: %d time(s), first at %d",fnd,time,position);
}
