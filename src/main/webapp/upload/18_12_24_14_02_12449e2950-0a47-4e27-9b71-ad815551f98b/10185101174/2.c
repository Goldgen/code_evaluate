#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int place=0;
struct book{
    char name[9];//姓名，只包含英文字母
    char student_number[12];//学号，忽略前导零
    char post[16];//邮件，可包含英文字母、数字、符号
    char phone_number[12];//电话号码，要有前导零
};
struct correct{
    char name[9];//姓名，只包含英文字母
    char student_number[12];//学号，忽略前导零
    char post[16];//邮件，可包含英文字母、数字、符号
    char phone_number[12];//电话号码，要有前导零
    }str;
void add(struct book* RAY);
void delete1(struct book* RAY);
void update(struct book* RAY);
void sort(struct book* RAY);
void find(struct book* RAY);
void print(struct book* RAY);
int main()
{
    struct book *ray;
    ray=(struct book *) malloc(100*sizeof(struct book));
    char instrcution[20];
    while(scanf("%s",instrcution)==1){
    if(strcmp(instrcution,"ADD")==0)
        add(ray);
    else if(strcmp(instrcution,"DELETE")==0)
        delete1(ray);
    else if(strcmp(instrcution,"UPDATE")==0)
        update(ray);
    else if(strcmp(instrcution,"SORT")==0)
        sort(ray);
    else if(strcmp(instrcution,"FIND")==0)
        find(ray);
    else if(strcmp(instrcution,"PRINT")==0){
        print(ray);
        break;
    }
    }
}
void add(struct book* RAY){
    bool judge=true;
    char swap[12];
    char* point=swap;
    scanf("%s",RAY[place].name);
    scanf("%s",swap);
    for(int i=0; i<strlen(swap); i++){
        if(swap[i]=='0')
            point++;
        else
            break;
    }
    strcpy(RAY[place].student_number,point);
    scanf("%s",RAY[place].post);
    scanf("%s",RAY[place].phone_number);
    for(int i=0; i<place; i++){
        if((strcmp(RAY[place].student_number,RAY[i].student_number)==0)&&strcmp(RAY[place].student_number,"NULL")!=0){
            judge=false;
            printf("Already Exists\n");
            break;
        }
    }
        if(judge){
        printf("Added\n");
        place++;
        }
}                                                                                         //需要考虑最后一组数据是否重复了
void delete1(struct book* RAY){
    bool judge=true;
    char swap[12];
    char* point=swap;
    scanf("%s",swap);
    for(int i=0; i<strlen(swap); i++){
        if(swap[i]=='0')
            point++;
        else
            break;
    }
    char swap1[12];
    strcpy(swap1,point);
    for(int i=0; i<place; i++){
        if((strcmp(swap1,RAY[i].student_number)==0)&&(strcmp(RAY[i].student_number,"NULL")!=0)){
             judge=false;
             for(int j=i+1; j<place; j++){
                strcpy(RAY[j-1].name,RAY[j].name);
                strcpy(RAY[j-1].student_number,RAY[j].student_number);
                strcpy(RAY[j-1].post,RAY[j].post);
                strcpy(RAY[j-1].phone_number,RAY[j].phone_number);
             }
             place--;
             printf("Deleted\n");
             break;
        }
    }
    if(judge)
        printf("Not Found\n");
}
void update(struct book* RAY){
    bool judge=true;
    scanf("%s",str.name);
    scanf("%s",str.student_number);
    scanf("%s",str.post);
    scanf("%s",str.phone_number);
    char* point=str.student_number;
    char arr[12];
    for(int j=0; j<strlen(str.student_number); j++){
            if(str.student_number[j]=='0')
                point++;
            else
                break;
            }
            strcpy(arr,point);
    for(int i=0; i<place; i++){
        if(strcmp(arr,RAY[i].student_number)==0&&strcmp(RAY[i].student_number,"NULL")!=0){
            judge=false;
            printf("Updated\n");
            strcpy(RAY[i].name,str.name);
            strcpy(RAY[i].post,str.post);
            strcpy(RAY[i].phone_number,str.phone_number);
            break;
    }
}
    if(judge)
    printf("Not Found\n");
}
void sort(struct book* RAY){
     char swap[21];
     char swap2[21];
     char swap3[21];
     char swap4[21];
     for(int i=1; i<place; i++){
            for(int j=i; j>0; j--){
                if(strcmp(RAY[j].student_number,RAY[j-1].student_number)<0){
                    strcpy(swap,RAY[j-1].student_number);
                    strcpy(RAY[j-1].student_number,RAY[j].student_number);
                    strcpy(RAY[j].student_number,swap);
                    strcpy(swap2,RAY[j-1].name);
                    strcpy(RAY[j-1].name,RAY[j].name);
                    strcpy(RAY[j].name,swap2);
                    strcpy(swap3,RAY[j-1].post);
                    strcpy(RAY[j-1].post,RAY[j].post);
                    strcpy(RAY[j].post,swap3);
                    strcpy(swap4,RAY[j-1].phone_number);
                    strcpy(RAY[j-1].phone_number,RAY[j].phone_number);
                    strcpy(RAY[j].phone_number,swap4);

                }
            }
        }
    for(int i=1; i<place; i++){
            for(int j=i; j>0; j--){
                    if((strcmp(RAY[j].student_number,"NULL")!=0)&&(strcmp(RAY[j-1].student_number,"NULL")!=0)){
                        if(strlen(RAY[j].student_number)==strlen(RAY[j-1].student_number)){
                            if(strcmp(RAY[j].student_number,RAY[j-1].student_number)<0){
                    strcpy(swap,RAY[j-1].student_number);
                    strcpy(RAY[j-1].student_number,RAY[j].student_number);
                    strcpy(RAY[j].student_number,swap);
                    strcpy(swap2,RAY[j-1].name);
                    strcpy(RAY[j-1].name,RAY[j].name);
                    strcpy(RAY[j].name,swap2);
                    strcpy(swap3,RAY[j-1].post);
                    strcpy(RAY[j-1].post,RAY[j].post);
                    strcpy(RAY[j].post,swap3);
                    strcpy(swap4,RAY[j-1].phone_number);
                    strcpy(RAY[j-1].phone_number,RAY[j].phone_number);
                    strcpy(RAY[j].phone_number,swap4);
                            }
                        }
                        else if(strlen(RAY[j].student_number)<strlen(RAY[j-1].student_number)){
                    strcpy(swap,RAY[j-1].student_number);
                    strcpy(RAY[j-1].student_number,RAY[j].student_number);
                    strcpy(RAY[j].student_number,swap);
                    strcpy(swap2,RAY[j-1].name);
                    strcpy(RAY[j-1].name,RAY[j].name);
                    strcpy(RAY[j].name,swap2);
                    strcpy(swap3,RAY[j-1].post);
                    strcpy(RAY[j-1].post,RAY[j].post);
                    strcpy(RAY[j].post,swap3);
                    strcpy(swap4,RAY[j-1].phone_number);
                    strcpy(RAY[j-1].phone_number,RAY[j].phone_number);
                    strcpy(RAY[j].phone_number,swap4);
                    }
                 }
            }
    }
    printf("Sorted\n");
}
void find(struct book* RAY){
    bool judge=true;
    char swap[12];
    char* point=swap;
    scanf("%s",swap);
    for(int i=0; i<strlen(swap); i++){
        if(swap[i]=='0')
            point++;
        else
            break;
    }
    char swap1[12];
    strcpy(swap1,point);
    for(int i=0; i<place; i++){
        if((strcmp(RAY[i].student_number,swap1)==0)&&(strcmp(RAY[i].student_number,"NULL")!=0)){
           judge=false;
           printf("%s %s %s %s\n",RAY[i].name,RAY[i].student_number,RAY[i].post,RAY[i].phone_number);
           break;
    }
    }
     if(judge)
    printf("Not Found\n");
}
void print(struct book* RAY){
    if(place==0){
        printf("Empty\n");
    }
    else{
        printf("%8s %11s %15s %11s\n","NAME","STUDENT_ID","EMAIL","TELEPHONE");
        for(int i=0; i<place; i++){
            printf("%8s %11s %15s %11s\n",RAY[i].name,RAY[i].student_number,RAY[i].post,RAY[i].phone_number);
        }
    }
}
