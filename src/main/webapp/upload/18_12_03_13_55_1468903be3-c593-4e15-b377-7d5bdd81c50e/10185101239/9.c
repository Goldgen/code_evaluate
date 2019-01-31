#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets(a);
    char ch[100],tmp[100];
    int i, m, b[100],w;
    int flag = 0;
    int k;
   scanf("%s",ch);
    m = strlen(a);
	w=strlen(ch);
    for (i = 0; i < m; i++){
        if ( ch[0]==a[i]){
			for(k=0;k<w;k++){
		    tmp[k]=a[i+k];}
            if(strcmp(tmp,ch)==0){
            b[flag] = i;
            flag += 1;
				}}
    }
    if (flag == 0)printf ("-1");
    else {
        printf ("%s: %d time(s), ",ch, flag);
        printf ("first at %d", b[0]);
    }
    return 0;
}
