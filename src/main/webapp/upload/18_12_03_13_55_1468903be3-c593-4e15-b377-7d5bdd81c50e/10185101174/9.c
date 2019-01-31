#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
  bool place=true;
  char str[8100]={'\0'};
  gets(str);
  char goal[8100];
  scanf("%s",goal);
  int times=0;
  int position;
  for(int i=0; i<strlen(str); i++){
    if(str[i]==goal[0]){
        for(int j=i+1,m=1; m<strlen(goal); m++,j++){
            if(str[j]!=goal[m]){
                place=false;
                break;
            }
        }
        if(place==true){
            times++;
            if(times==1)
            position=i;
        }
        place=true;
    }
  }
  printf("%s: %d time(s), first at",goal,times);
  if(times==0)
    printf(" -1");
  else
    printf(" %d",position);
}
