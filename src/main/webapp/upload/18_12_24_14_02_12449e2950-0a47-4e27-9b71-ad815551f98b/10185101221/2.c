#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAP 25
typedef struct Dir Dir;
struct Dir
{
    char name[9];
    long long ID;
    char mail[16];
    char phone[12];
};
void fadd(Dir *p,int *pcount)
{
    int i=0;
    char c[12];
    scanf("%s",p[*pcount].name);
    getchar();
    scanf("%s",c);
    getchar();
    if(strcmp(c,"NULL")){
        p[*pcount].ID=atoll(c);
        for(i=0;i<*pcount;i++){
            if(p[*pcount].ID==(*(p+i)).ID){
                printf("Already Exists\n");

                return;
            }
        }
    }
    else
         p[*pcount].ID=-1;
    scanf("%s",p[*pcount].mail);
    getchar();
    scanf("%s",p[*pcount].phone);
    *pcount+=1;
    printf("Added\n");
}
void fdelete(Dir *p,int *pcount)
{
    int i=0,j=0;
    long long temp;
    scanf("%lld",&temp);
    for(i=0;i<*pcount;i++){
            if(temp==p[i].ID){
                for(j=i;j<*pcount-1;j++)
                    p[j]=p[j+1];
                printf("Deleted\n");
                (*pcount)--;
                return;
            }
    }
    printf("Not Found\n");
}
void fupdate(Dir *p,int *pcount)
{
    int i=0;
    Dir temp;
	char c[12];
    scanf("%s",temp.name);
    getchar();
    scanf("%s",c);
    getchar();
    scanf("%s",temp.mail);
	getchar();
    scanf("%s",temp.phone);
	if(strcmp(c,"NULL"))
        temp.ID=atoll(c);
    else{
         printf("Not Found\n");
         return;
    }
    for(i=0;i<*pcount;i++){
            if(temp.ID==p[i].ID){
                p[i]=temp;
                printf("Updated\n");
                return;
            }
    }
    printf("Not Found\n");
}
void fsort(Dir *p,int *pcount)
{
    int i=0,j=0;
    Dir arr1[*pcount];
    Dir arr2[*pcount];
    int a=0,b=0;
    for(i=0;i<*pcount;i++){
        if((*(p+i)).ID==-1)
            arr2[b++]=p[i];
        else
            arr1[a++]=p[i];
    }
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            if(arr1[j].ID>arr1[j+1].ID){
                Dir t=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=t;
            }
        }
    }
    for(i=0;i<=a;i++)
        p[i]=arr1[i];
    for(i=a;i<*pcount;i++)
        p[i]=arr2[i-a];
    printf("Sorted\n");
}
void ffound(Dir *p,int *pcount)
{
    int i=0;
    long long id=0;
    scanf("%lld",&id);
    for(i=0;i<*pcount;i++){
            if(id==p[i].ID){
                printf("%s",(*(p+i)).name);
                printf(" %lld",(*(p+i)).ID);
                printf(" %s",(*(p+i)).mail);
                printf(" %s",(*(p+i)).phone);
                printf("\n");
                return;
            }
    }
    printf("Not Found\n");
}
void fprint(Dir *p,int *pcount)
{
    int i=0;
	if(*pcount==0)
		printf("Empty\n");
	else{
    printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
    for(i=0;i<*pcount;i++){
        printf("%8s",(*(p+i)).name);
        if(p[i].ID==-1)
            printf("        NULL");
        else
            printf(" %11lld",(*(p+i)).ID);
        printf(" %15s",(*(p+i)).mail);
        printf(" %11s",(*(p+i)).phone);
        printf("\n");
    }
	}
}
int main()
{
    char tofun[20];
    size_t capacity=25;
    Dir *ptele=(Dir*)malloc(capacity*sizeof(Dir));
    int count=0;
    while(scanf("%s",tofun)!=EOF){
          if(strcmp(tofun,"ADD")==0)
            fadd(ptele,&count);
          else if(strcmp(tofun,"DELETE")==0)
            fdelete(ptele,&count);
          else if(strcmp(tofun,"UPDATE")==0)
            fupdate(ptele,&count);
          else if(strcmp(tofun,"SORT")==0)
            fsort(ptele,&count);
          else if(strcmp(tofun,"FIND")==0)
            ffound(ptele,&count);
          else if(strcmp(tofun,"PRINT")==0)
            fprint(ptele,&count);
          if(count==capacity){
            capacity+=CAP;
            Dir *ptemp=realloc(ptele,capacity*sizeof(Dir));
            ptele=ptemp;
          }
    }
    free(ptele);
    ptele=NULL;
    return 0;
}
