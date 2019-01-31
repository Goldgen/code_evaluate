#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    while(1){
    char a[1111], b[1111];
    scanf("%s", a);
    if(strcmp(a, "#")==0) break;
	getchar();
    scanf("%s", b);
	//getchar();
    int lena, lenb, i=0, cnt=0;
    lena=strlen(a);
    lenb=strlen(b);
    while(i<lena-lenb+1){
        char mmm[1111];
        for(int j=0; j<lenb; j++)
            mmm[j]=a[i+j];
        if(strcmp(mmm, b)==0){
                cnt++;
                i=i+lenb-1;
        }
        i++;
    }
    printf("%d\n", cnt);

    }
    return 0;
}
