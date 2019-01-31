#include<stdio.h>
#include<string.h>
void Number2Alpha(int n, char *p)
{
    char *a[12];
    a[0]="January";
    a[1]="February";
    a[2]="March";
    a[3]="April";
    a[4]="May";
    a[5]="June";
    a[6]="July";
    a[7]="August";
    a[8]="September";
    a[9]="October";
    a[10]="November";
    a[11]="December";
    printf("%s",a[n-1]);
}
int main()
{
    int n;
    scanf("%d",&n);
    char *p;
    Number2Alpha(n, p);
    return 0;
}
