#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void Sort_Output(char **p, int n);

int main()
{
    int T;
    scanf("%d",&T); getchar();
    int n, i;
    for (n=0; n<T; n++)
    {
        i = 0;
        char **ps = calloc(200, sizeof(char*));
        while (1)
        {
            char buf[250], c, space[5] = {'\0'};
            scanf("%s",buf);
                //printf("%s\n",buf);
            ps[i] = malloc(250);
            strcpy(ps[i], buf);
                //printf("%s\n",ps[i]);
            i++;

            c = getchar();
            if (c==' '){
                ps[i] = malloc(250);
                strcpy(ps[i], space);
                i++;
            }

            else if (c=='\n') break;
        }//input one line
        int h = i;//how many words including space as one


        //sort and output one line
        printf("case #%d:\n",n);
        Sort_Output(ps, h);
        if (n<T-1) printf("\n");

        for (i=0; i<h; i++){
            free(ps[i]);
        }

    }
    return 0;
}

void Sort_Output(char **p, int n)
{
    int i, j, z, up, upp; char *temp = NULL;
    size_t len1, len2;
    for (i=0; i<n-1; i++){
        up = 1;
        len1 = strlen(p[i]);
        for (z=0; z<len1; z++){
            if (!isupper(*(p[i]+z))){
                up = 0; break;
            }
        }
        if (up==0 || *p[i]=='\0') continue;
        for (j=i+1; j<n; j++){
            upp = 1;
            len2 = strlen(p[j]);
            for (z=0; z<len2; z++){
                if (isupper(*(p[j]+z))==0){
                    upp = 0; break;
                }
            }
            if (upp==0 || *p[j]=='\0') continue;
            if (strcmp(p[j],p[i])<0){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
        if (*p[i]=='\0') printf(" ");
        else printf("%s",p[i]);
    return;
}





