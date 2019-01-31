#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n][55];
    for(int i = 0;i < n;i++){
        scanf("%s",str[i]);
    }
    for(int js1 = 0;js1 < n;js1++){
        for(int js2 = 0;*(*(str+js1)+js2) != '\0';js2++){
            if(*(*(str+js1)+js2) != 'Z')
                *(*(str+js1)+js2) += 1;
            else *(*(str+js1)+js2) = 'A';
        }
    }
    for(int js = 0;js < n;js++){
        printf("case #%d: %s\n",js,str[js]);
    }
    return 0;
}
