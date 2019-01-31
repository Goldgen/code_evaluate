#include<stdio.h>>
#include<string.h>


int  main()
{
    char ch1[81],ch2[81];
    gets(ch1);
    scanf("%s",&ch2);
    int l1,l2,s[81];
    l1=strlen(ch1);
    l2=strlen(ch2);
    char F1[l2],F2[l2];
    int i,j,c=0;
    for(i=0;i<l2;i++) F2[i]=ch2[i];
    for(i=0;i<l1-l2;i++){   
        for(j=0;j<l2;j++)
        {F1[j]=ch1[i+j];  
        if (strcmp(F1,F2)==0){
            s[c]=i;
            c++;
        }
        }
    }
    printf("%s: %d time(s), first at %d",F2,c,s[0]);
    return 0;
}
