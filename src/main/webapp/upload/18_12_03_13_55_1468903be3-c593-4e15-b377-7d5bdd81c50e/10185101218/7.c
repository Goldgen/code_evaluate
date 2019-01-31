#include <stdio.h>
#include <string.h>

void LonggetWord(const char in[],int n,char out[])
{
    int js1 = 0,js = 0;
    int max[2] = {0,0};
    for(int js2 = 0;js2 <= n+1;js2++){
        if(in[js2] == ' '||in[js2] == '\0'){
            if(js1 > max[0]){
                max[0] = js1;
                max[1] = js2-js1;
            }
            js1 = 0;
        }
        else if(js2 != n)
            js1++;
    }
    for(int i = max[1];i < max[0]+max[1];i++){
        out[js] = in[i];
        js++;
    }
}

int main(void)
{
    char str[80],out[80] = "0";
    gets(str);
    LonggetWord(str,strlen(str),out);
    printf("%s\n",out);
    return 0;
}
