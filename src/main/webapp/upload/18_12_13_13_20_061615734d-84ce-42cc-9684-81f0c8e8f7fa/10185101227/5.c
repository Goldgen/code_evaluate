#include <stdio.h>
const char month[12][30]={"January","February","March","April","May","June","July","August","September","October","November","December"};
void Number2Alpha(int num, char* mptr)
{
   puts(*(month+num-1));
}
int main()
{
int a;
scanf("%d",&a);
Number2Alpha (a,month);
 return 0;
}


