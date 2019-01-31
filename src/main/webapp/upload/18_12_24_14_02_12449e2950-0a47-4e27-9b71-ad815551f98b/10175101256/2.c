#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
struct MailList{
    char name[9],mail[16],tel[12],id[12];
    long long StdId;
};
int command(char *p){
    if(strcmp(p,"ADD")==0)
        return 1;
    else  if(strcmp(p,"DELETE")==0)
        return 2;
    else  if(strcmp(p,"UPDATE")==0)
        return 3;
    else  if(strcmp(p,"SORT")==0)
        return 4;
    else  if(strcmp(p,"FIND")==0)
        return 5;
    else  if(strcmp(p,"PRINT")==0)
        return 6;
    return 0;
}
int add(struct MailList *p,int n){
    struct MailList a;
    scanf("%s",a.name);
    getchar();
    scanf("%s",a.id);
    if(strcmp(a.id,"NULL")==0)
        a.StdId=LLONG_MAX;
    else
        sscanf(a.id,"%lld",&a.StdId);
    if(a.id[0]=='0'&&strlen(a.id)==1)
        a.StdId=0;
    scanf("%s",a.mail);
    getchar();
    scanf("%s",a.tel);
    getchar();
    //           printf("%s\n",a.id);
    if(a.StdId!=LLONG_MAX)
    for(int i=0;i<n-1;i++){
        // printf("%s\n",(p+i)->id);
        if((p+i)->StdId==a.StdId){
            printf("Already Exists\n");
            return 1;
        }
    }
    *(p+n-1)=a;
    printf("Added\n");
    return 0;
}
int delete(struct MailList *p,int n){
    struct MailList a;
    int k=0;
    a.id[k]=getchar();
    while(a.id[k]=='0')
        a.id[k]=getchar();
    while('\n'!=a.id[k]){
        k++;
        a.id[k]=getchar();
    }
    a.id[k]='\0';
        sscanf(a.id,"%lld",&a.StdId);
    if(a.id[0]=='0'&&strlen(a.id)==1)
        a.StdId=0;
        if(strcmp(a.id,"NULL")!=0)
    for(int i=0;i<n;i++){
        if((p+i)->StdId==a.StdId){
            for(int j=i;j<n-1;j++){
                *(p+j)=*(p+j+1);
            }
            printf("Deleted\n");
            return 0;}
    }
    printf("Not Found\n");
    return 1;
}
void update(struct MailList *p,int n){
    struct MailList a;
    scanf("%s",a.name);
    getchar();
    int k=0;
    a.id[k]=getchar();
    while(a.id[k]=='0')
        a.id[k]=getchar();
    while(a.id[k]!=' '){
        k++;
        a.id[k]=getchar();
    }
    a.id[k]='\0';
    //if(strcmp(a.id,"NULL")==0)
      //  a.StdId=LLONG_MAX;
    //else
        sscanf(a.id,"%lld",&a.StdId);
    if(a.id[0]=='0'&&strlen(a.id)==1)
        a.StdId=0;
    scanf("%s",a.mail);
    getchar();
    scanf("%s",a.tel);
    getchar();
    for(int i=0;i<n;i++){
        if((p+i)->StdId==a.StdId){
            *(p+i)=a;
            printf("Updated\n");
            return;
        }
    }
    printf("Not Found\n");
}
void sort(struct MailList *p,int n){
    struct MailList t;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if((p+j)->StdId>(p+j+1)->StdId){
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
    printf("Sorted\n");
}
void find(struct MailList *p,int n){
    struct MailList a;
    int k=0;
    a.id[k]=getchar();
    while(a.id[k]=='0')
        a.id[k]=getchar();
    while(a.id[k]!='\n'){
        k++;
        a.id[k]=getchar();
    }
    a.id[k]='\0';
    if(a.id[0]=='0'&&strlen(a.id)==1)
        a.StdId=0;
    //if(strcmp(a.id,"NULL")!=0)
        sscanf(a.id,"%lld",&a.StdId);
    for(int i=0;i<n;i++){
        if((p+i)->StdId==a.StdId){
            printf("%s %lld %s %s\n",(p+i)->name,(p+i)->StdId,(p+i)->mail,(p+i)->tel);
            return;
        }
    }
    printf("Not Found\n");
}
void print(struct MailList *p,int n){
    if(n){
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for(int i=0;i<n;i++){
            printf("%8s",(p+i)->name);
            if((p+i)->StdId==LLONG_MAX)
                printf("        NULL");
            else
                printf(" %11lld",(p+i)->StdId);
            printf(" %15s",(p+i)->mail);
            printf(" %11s\n",(p+i)->tel);
        }}
    else
        printf("Empty\n");
}
int main(){
    char com[7];
    struct MailList list[10000];
    //list = (struct MailList *)malloc(sizeof(struct MailList));
    int n=0;       //nŒ™≥§∂»
    while(scanf("%s",com)!=EOF){
        int x=command(com);
        switch(x){
            case 1:
                n++;
                //list= (struct MailList *)malloc(n*sizeof(struct MailList));
                if(add(list,n)==1)
                    n--;
                //list= (struct MailList *)malloc(n*sizeof(struct MailList));
                break;
            case 2:
                if(delete(list,n)==0)
                    n--;
                //list= (struct MailList *)malloc(n*sizeof(struct MailList));
                break;
            case 3:
                update(list,n);
                break;
            case 4:
                sort(list,n);
                break;
            case 5:
                find(list,n);
                break;
            case 6:
                print(list,n);
                break;
            default:
                break;
        }
    }
    //free(list);
}
