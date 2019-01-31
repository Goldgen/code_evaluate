#include <stdio.h>
#include<string.h>
void Number2Alpha(int num, char* mptr){
    char *month[]={"January","February","March","April","May","June","July","August",
				   "September","October","November","December"};
    strcpy(mptr,*(month+num-1));
}
int main()
{
    int n;
    char a[20];
    scanf("%d",&n);
    Number2Alpha(n,a);
printf("%s",a);
return 0;
}
