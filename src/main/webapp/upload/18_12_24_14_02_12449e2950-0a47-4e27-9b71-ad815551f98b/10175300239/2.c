#include <stdio.h>
#include <string.h>
struct tel{
        char name[9];
        char number[12];
        char mail[16];
        char phone[12];
    }stu[100],stucopy[100];
int addStudent(struct tel *p,int n);
int delStudent(struct tel *p,int n);
void updateStudent(struct tel *p,int n);
struct tel* sortStudent(struct tel *p1,struct tel *p2,int n);
long long c2n(char *p);
void findStudent(struct tel *p,int n);
void printStudent(struct tel *p,int n);
int main()
{

    struct tel *pt,*pt2;
    pt=stu;
    pt2=stucopy;
    char a[8];
    int i=0;
    while(scanf("%s",a)!=EOF){
        if(strcmp(a,"ADD")==0){
            i=addStudent(pt,i);
            //printf("%d",i);
        }
        else if(strcmp(a,"DELETE")==0){
            i=delStudent(pt,i);
        }
        else if(strcmp(a,"UPDATE")==0){
            updateStudent(pt,i);
        }
        else if(strcmp(a,"SORT")==0){
            pt=sortStudent(pt,pt2,i);
        }
        else if(strcmp(a,"FIND")==0){
            findStudent(pt,i);
        }
        else if(strcmp(a,"PRINT")==0){
            printStudent(pt,i);
        }
    }
    return 0;
}

long long c2n(char *p){
    long long number=0;
    int i;
    for(i=0;i<strlen(p);i++){
        number*=10;
        number+=p[i]-'0';
    }
    return number;
}
int addStudent(struct tel *p,int n){
    int i;
    int exist=0;
    char nameTemp[9];
    char numberTemp[12];
    char skip[20];
    scanf("%s",nameTemp);
    scanf("%s",numberTemp);
    for(i=0;i<n;i++){
        if(strcmp(numberTemp,"NULL")!=0
           &&(c2n((p+i)->number))==c2n(numberTemp)){
                scanf("%s",skip);
                scanf("%s",skip);
                printf("Already Exists\n");
                exist=1;
                break;
        }
    }
    if(exist==0){
        strcpy((p+n)->number,numberTemp);
        strcpy((p+n)->name,nameTemp);
        scanf("%s",&(p+n)->mail);
        scanf("%s",&(p+n)->phone);
        printf("Added\n");
        n++;
    }
    return n;
}
int delStudent(struct tel *p,int n){
    int i,j;
    char numberTemp[12];
    scanf("%s",numberTemp);
    for(i=0;i<n;i++){
        if(strcmp(numberTemp,"NULL")!=0&&strcmp(numberTemp,(p+i)->number)==0){
            for(j=i;j<n-1;j++){
                strcpy((p+j)->name,(p+j+1)->name);
                strcpy((p+j)->number,(p+j+1)->number);
                strcpy((p+j)->mail,(p+j+1)->mail);
                strcpy((p+j)->phone,(p+j+1)->phone);
            }
            n--;
            printf("Deleted\n");
            return n;
        }
    }
    printf("Not Found\n");
    return n;
}
void updateStudent(struct tel *p,int n){
    int i;
    int exist=0;
    char nameTemp[9];
    char numberTemp[12];
    char skip[20];
    scanf("%s",nameTemp);
    scanf("%s",numberTemp);
    for(i=0;i<n;i++){
        if(strcmp(numberTemp,"NULL")!=0
            &&(c2n((p+i)->number))==c2n(numberTemp)){
                exist=1;
                strcpy((p+i)->number,numberTemp);
                strcpy((p+i)->name,nameTemp);
                scanf("%s",&(p+i)->mail);
                scanf("%s",&(p+i)->phone);
                printf("Updated\n");
                break;
        }
    }
    if(exist==0){
        scanf("%s",skip);
        scanf("%s",skip);
        printf("Not Found\n");
    }
}
struct tel* sortStudent(struct tel *p1,struct tel *p2,int n){
    int number1,number2,count1,count2;
    number1=number2=0;
    struct tel stuTemp;
    int i,j;
    for(i=0;i<n;i++){
        if(strcmp((p1+i)->number,"NULL")==0)
            number2++;
        else
            number1++;
    }
    count1=0;
    count2=number1;
    for(i=0;i<n;i++){
        if(strcmp((p1+i)->number,"NULL")==0){
            *(p2+count2)=*(p1+i);
            count2++;
        }
        else{
            *(p2+count1)=*(p1+i);
            count1++;
        }
    }
    for(i=0;i<number1;i++){
        for(j=i+1;j<number1;j++){
            if(c2n((p2+i)->number)>c2n((p2+j)->number)){
                stuTemp=*(p2+i);
                *(p2+i)=*(p2+j);
                *(p2+j)=stuTemp;
            }
        }
    }
    printf("Sorted\n");
    return p2;
}
void findStudent(struct tel *p,int n){
    int i;
    int exist=0;
    char numberTemp[12];
    scanf("%s",numberTemp);
    for(i=0;i<n;i++){
        if(strcmp(numberTemp,"NULL")!=0
            &&c2n((p+i)->number)==c2n(numberTemp)){
                exist=1;
                printf("%s %lld %s %s\n",(p+i)->name,c2n((p+i)->number),(p+i)->mail,(p+i)->phone);
                break;
        }
    }
    if(exist==0){
        printf("Not Found\n");
    }
}
void printStudent(struct tel *p,int n){
    int i;
    if(n==0)
        printf("Empty\n");
    else{
        printf("    %s %11s %15s %11s\n","NAME","STUDENT_ID","EMAIL","TELEPHONE");
        for(i=0;i<n;i++){
            if(strcmp((p+i)->number,"NULL")==0)
                printf("%8s %11s %15s %11s\n",(p+i)->name,(p+i)->number,(p+i)->mail,(p+i)->phone);
            else
                printf("%8s %11lld %15s %11s\n",
                       (p+i)->name,c2n((p+i)->number),(p+i)->mail,(p+i)->phone);
        }
    }
}
