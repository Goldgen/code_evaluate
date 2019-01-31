#include <stdio.h>
#include <string.h>
struct person
{
    char name[9];
    long long int id;
    char email[16];
    char tele[12];
};
void PRINT(struct person **p,long long int n){
    if(n == 0)printf("Empty\n");
    else {
      printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
      int i = 0;
      for (; i < n ; i++){
          if(p[i]->name[0] == '0')continue;
          printf("%8s ",p[i]->name);
          if(p[i]->id == -10){
              printf("       NULL ");
          }
          else{
              printf("%11lld ",p[i]->id);
          }
          printf("%15s %11s\n",p[i]->email,p[i]->tele);
      }
    }
}
long long int ADD(struct person**p,long long int n){
    char rabish[20];
    scanf("%s",p[n]->name);
    if(scanf("%lld",&p[n]->id) != 1){
        p[n]->id = -10;
        scanf("%s",rabish);
    }
    scanf("%s %s",p[n]->email,p[n]->tele);
    for(int i = 0 ; i < n ; i++){
        if(p[n]->id == p[i]->id && p[n]->id != -10){
            printf("Already Exists\n");
            return n;
        }
    }
    printf("Added\n");
    n++;
    return n;
}
long long int DELETE(struct person**p,long long int n){
    long long exam = 0;
    int i = 0, m = 0;
    struct person *tmp;
    if(scanf("%lld",&exam)==1){
        for(; i < n ; i++){
            if(exam == p[i]->id){
                tmp = p[i];
                for( m = i ; m < n-1 ; m++){
                    p[m] = p[m+1];
                }
                p[m] = tmp;
                printf("Deleted\n");
                return n-1;
            }
        }
        if(m == 0)printf("Not Found\n");
    }
    return n;
}
void UPDATE(struct person**p,long long int n){
    struct person exam;
    scanf("%s %lld %s %s",exam.name,&exam.id,exam.email,exam.tele);
    int i = 0,m = 0;
    for (; i < n ; i++){
        if(exam.id == p[i]->id){
            strcpy(p[i]->name,exam.name);
            strcpy(p[i]->email,exam.email);
            strcpy(p[i]->tele,exam.tele);
            m = 1;
            printf("Updated\n");
            break;
        }
    }
    if(m == 0)printf("Not Found\n");
}
void SORT(struct person**p,long long int n){
    int i = 0,m = 0;
    struct person *tmp;
    for (i = 0 ; i < n-1 ; i++){
      for(m = 0 ; m < n-1-i ; m++){
          if((p[m]->id > p[m+1]->id &&p[m+1]->id != -10) ||(p[m]->id == -10 && p[m+1]->id != -10)){
              tmp = p[m];
              p[m] = p[m+1];
              p[m+1] = tmp;
          }
      }
    }
    printf("Sorted\n");
}
void FIND(struct person**p,long long int n){
    long long int exam = 0;
    int i = 0,m = 0;
    scanf("%lld",&exam);
    for (; i < n ; i++){
        if(p[i]->id == exam){
            printf("%s %lld %s %s\n",p[i]->name,exam,p[i]->email,p[i]->tele);
            m = 1;
            break;
        }
    }
    if(m == 0)printf("Not Found\n");
}
int main()
{
    char order[10];
    long long int n = 0;
    long long int sum = 0;
    struct person **p = (struct person**)malloc(10000*sizeof(struct person*));
    int i_1 = 0 ;
    while(scanf("%s",order) != EOF){
        if(n == sum ){
            sum+=50;
            for(;i_1 < sum ; i_1++){
                p[i_1] = (struct person*)malloc(sizeof(struct person));
                p[i_1]->id = -10;
            }
        }
        if(strcmp(order,"ADD")==0){
            n = ADD(p,n);

        }
        else if(strcmp(order,"DELETE")==0){
            n = DELETE(p,n);
        }
        else if(strcmp(order,"UPDATE")==0){
            UPDATE(p,n);
        }
        else if(strcmp(order,"SORT")==0){
            SORT(p,n);
        }
        else if(strcmp(order,"FIND")==0){
            FIND(p,n);
        }
        else if(strcmp(order,"PRINT")==0){
            PRINT(p,n);
        }
    }
    return 0;
}

