#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Sort(char **p,int x);
int is_Word(char *a);
int main()
{
    int t,i,j,k,countWord;
    scanf("%d",&t);
    char **str=(char**)malloc(sizeof(char*)*201);
    for(i=0;i<201;i++)
        *(str+i)=(char*)malloc(sizeof(char)*201);
    char input[201];
    getchar();
    for(i=0;i<t;i++){
        countWord=0;
        gets(input);
        k=0;
        for(j=0;j<strlen(input);j++){
            if(input[j]==' '){
                str[countWord][k]='\0';
                countWord++;
                k=0;
            }
            else{
                str[countWord][k]=input[j];
                k++;
            }
        }
        str[countWord][k]='\0';
        Sort(str,countWord);
        printf("case #%d:\n",i);
        for(j=0;j<countWord;j++){
            printf("%s ",*(str+j));
        }
        printf("%s\n",*(str+j));

    }
    for(i=0;i<201;i++)
        free(*(str+i));
    free(str);
    return 0;
}
void Sort(char **p,int n){
    char temp[201];
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n+1;j++){
            if(is_Word(p[i])&&is_Word(p[j])&&strcmp(p[i],p[j])>0){
                    strcpy(temp,p[i]);
                    strcpy(p[i],p[j]);
                    strcpy(p[j],temp);
            }
        }
    }
}
int is_Word(char *a){
    int n;
    for(n=0;n<strlen(a);n++){
        if(a[n]<'A'||a[n]>'Z'){
            return 0;
        }
    }
    return 1;
}
