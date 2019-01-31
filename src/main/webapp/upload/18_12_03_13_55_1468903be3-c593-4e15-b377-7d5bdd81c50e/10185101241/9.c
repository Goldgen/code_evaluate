#include<stdio.h>

#include<stdlib.h>

#include<string.h>

char Sen[100],part[100];



int main()

{

    int i,j,x,y,count=0,m;

    char c;

    gets(Sen);

    scanf("%s",part);

    x=strlen(Sen);

    y=strlen(part);

    char trial[100];

    for(i=0;i<x;i++)

    {

        if(part[0]==Sen[i])

        {

            for(j=0;j<y;j++)

            {

                trial[j]=Sen[i+j];

            }

            if(strcmp(part,trial)==0) count+=1;

        }

    }

    int A[count];

    for(m=0;m<count;m++)

    {

        for(i=0;i<x;i++)

        {

            if(part[0]==Sen[i])

            {

                for(j=0;j<y;j++)

                {

                    trial[j]=Sen[i+j];

                }

                if(strcmp(part,trial)==0)

                {

                        A[m]=i;

                        break;

                }

            }

        }

    }

    if(count==0) printf("%s: %d time(s), first at -1",part,count);

    else printf("%s: %d time(s), first at %d",part,count,A[0]);

    return 0;

}
