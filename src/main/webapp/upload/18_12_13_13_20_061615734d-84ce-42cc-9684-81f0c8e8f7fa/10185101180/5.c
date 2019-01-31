#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Number2Alpha(int num, char* mptr)
{
    int i;
    char s1[20]="January";
    char s2[20]="February";
    char s3[20]="March";
    char s4[20]="April";
    char s5[20]="May";
    char s6[20]="June";
    char s7[20]="July";
    char s8[20]="August";
    char s9[20]="September";
    char s10[20]="October";
    char s11[20]="November";
    char s12[20]="December";
    switch(num)
    {
        case 1:for(i=0;s1[i]!='\0';i++)
               {
                   *mptr=s1[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 2:for(i=0;s2[i]!='\0';i++)
               {
                   *mptr=s2[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 3:for(i=0;s3[i]!='\0';i++)
               {
                   *mptr=s3[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 4:for(i=0;s4[i]!='\0';i++)
               {
                   *mptr=s4[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 5:for(i=0;s5[i]!='\0';i++)
               {
                   *mptr=s5[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 6:for(i=0;s6[i]!='\0';i++)
               {
                   *mptr=s6[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 7:for(i=0;s7[i]!='\0';i++)
               {
                   *mptr=s7[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 8:for(i=0;s8[i]!='\0';i++)
               {
                   *mptr=s8[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 9:for(i=0;s9[i]!='\0';i++)
               {
                   *mptr=s9[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 10:for(i=0;s10[i]!='\0';i++)
               {
                   *mptr=s10[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 11:for(i=0;s11[i]!='\0';i++)
               {
                   *mptr=s11[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        case 12:for(i=0;s12[i]!='\0';i++)
               {
                   *mptr=s12[i];
                   mptr++;
               }
               *mptr='\0';
               break;
        default:
               break;

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    char s[20];
    Number2Alpha(n,s);
    printf("%s",s);
}