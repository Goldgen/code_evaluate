#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int Isalpha(char arr[])
{
    for(int i=0;;i++){
		if(arr[i]=='\0')
			break;
        if(isupper(arr[i])==0)
            return 0;
    }
    return 1;
}
int main()
{
    int t=0;
    scanf("%d",&t);
    char temp[201];
    char c;
    for(int a=0;a<t;a++){
        char letter[201][201];
        int j=0;
        int b=0;
        do
        {
            scanf("%s",letter[b]);
            b++;
            if((c=getchar())=='\n')
                break;
        }while(1);

        for(int i=0;i<b;i++){
            for(j=0;j<b-i-1;j++){
                     if(Isalpha(letter[j])==0)
                           continue;
                     int x=j+1;
                     for(x=j+1;x<b-i;x++){
                        if(Isalpha(letter[x]))
                             break;
                     }
				     if(x>=b-i)
                        break;
                     if(strcmp(letter[j],letter[x])>0){
                     strcpy(temp,letter[j]);
                     strcpy(letter[j],letter[x]);
                     strcpy(letter[x],temp);
                     }
                     j=x-1;
            }
        }
        printf("case #%d:\n",a);
        for(int k=0;k<b-1;k++)
            printf("%s ",letter[k]);
        printf("%s\n",letter[b-1]);
    }
    return 0;
}
